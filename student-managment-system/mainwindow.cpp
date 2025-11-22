
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
, ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->pushButtonAdd->setEnabled(true);
    ui->pushButtonUpdate->setEnabled(false);
    ui->pushButtonDelete->setEnabled(false);

    connect(ui->pushButtonAdd, &QPushButton::clicked, this, &MainWindow::onAddClicked);
    connect(ui->pushButtonNext, &QPushButton::clicked, this, &MainWindow::onNextClicked);
    connect(ui->pushButtonUpdate, &QPushButton::clicked, this, &MainWindow::onUpdateClicked);
    connect(ui->pushButtonDelete, &QPushButton::clicked, this, &MainWindow::onDeleteClicked);
  //  connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::onSearchClicked);
    currentIndex = -1;

    // ---------- Load existing CSV file ----------
    QFile file("students.csv");
    if(file.open(QIODevice::ReadOnly)) {
        QTextStream in(&file);
        QString header = in.readLine(); // Skip header line
        while(!in.atEnd()) {
            QString line = in.readLine();

            // Remove quotes if present and split properly
            line = line.trimmed();
            if (line.startsWith('"') && line.endsWith('"')) {
                line = line.mid(1, line.length() - 2);
            }
            QStringList fields;
            QString field;
            bool inQuotes = false;

            // Manual CSV parsing to handle quoted fields with commas
            for (int i = 0; i < line.length(); ++i) {
                if (line[i] == '"') {
                    inQuotes = !inQuotes;
                } else if (line[i] == ',' && !inQuotes) {
                    fields.append(field.trimmed());
                    field.clear();
                } else {
                    field.append(line[i]);
                }
            }
            fields.append(field.trimmed()); // Add last field

            if(fields.size() == 6) {
                Student s;
                s.name = fields[0];
                s.roll = fields[1];
                s.father = fields[2];
                s.caste = fields[3];
                s.district = fields[4];
                s.gpa = fields[5];
                students.append(s);
            }
        }
        file.close();

        // Debug: Check how many records loaded
        qDebug() << "Loaded" << students.size() << "students from CSV";
    } else {
        qDebug() << "Could not open students.csv for reading";
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

// ------------------------------
// Helper Function: Validate inputs
// ------------------------------

bool MainWindow::validateFields()
{
    // Check if any field is empty
    if (ui->lineEditName->text().trimmed().isEmpty() ||
        ui->lineEditRoll->text().trimmed().isEmpty() ||
        ui->lineEditFather->text().trimmed().isEmpty() ||
        ui->lineEditCaste->text().trimmed().isEmpty() ||
        ui->lineEditDistrict->text().trimmed().isEmpty() ||
        ui->lineEditGPA->text().trimmed().isEmpty()) {

        QMessageBox::warning(this, "Validation Error", "All fields are required!");
        return false;
    }

    // Validate GPA format
    QString gpa = ui->lineEditGPA->text().trimmed();
    bool ok;
    double gpaValue = gpa.toDouble(&ok);



    return true;
}
void MainWindow::clearFields()
{
    // TODO: Implement clear fields logic
    ui->lineEditName->clear();
    ui->lineEditRoll->clear();
    ui->lineEditFather->clear();
    ui->lineEditCaste->clear();
    ui->lineEditDistrict->clear();
    ui->lineEditGPA->clear();
}
QString MainWindow::escapeCsv(const QString& field) {
    if (field.contains(',') || field.contains('"') || field.contains('\n')) {
        QString escaped = field;
        escaped.replace("\"", "\"\""); // Escape double quotes
        return "\"" + escaped + "\"";
    }
    return field;
}
// ------------------------------
// SAVE ALL STUDENTS TO CSV FILE
//
void MainWindow::saveAllToCSV(const QVector<Student>& students) {

    QFile file("students.csv");

    if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        QMessageBox::critical(this, "Error", "Cannot open students.csv for writing!");
        return;
    }

    QTextStream out(&file);
    out << "Name,Roll Number,Father Name,Caste,District,GPA\n";

    // Debug message
    qDebug() << "Saving" << students.size() << "students to CSV";

    for (const Student &s : students) {
        if (s.name.trimmed().isEmpty() || s.roll.trimmed().isEmpty()) {
            continue;
        }
        // Directly call escapeCsv since we're in MainWindow class
        QString name = escapeCsv(s.name);
        QString roll = escapeCsv(s.roll);
        QString father = escapeCsv(s.father);
        QString caste = escapeCsv(s.caste);
        QString district = escapeCsv(s.district);
        QString gpa = escapeCsv(s.gpa);

        out << name << "," << roll << "," << father << ","
            << caste << "," << district << "," << gpa << "\n";

        // Debug each student being saved
        qDebug() << "Saved:" << name << roll;
    }
    file.close();
    qDebug() << "CSV save completed";
}











// ------------------------------
// ADD BUTTON FUNCTION
// ------------------------------
void MainWindow::onAddClicked() {

    if (!validateFields()) return;

    // ✅ ROLL NUMBER UNIQUE CHECK - YEH NAYA CODE
    QString roll = ui->lineEditRoll->text().trimmed();
    bool duplicateFound = false;

    for (const Student &student : students) {
        if (student.roll.trimmed() == roll) {
            duplicateFound = true;
            break;
        }
    }
    if (duplicateFound) {
        QMessageBox::warning(this, "Duplicate Roll Number",
                             "This roll number already exists!\nPlease use a different roll number.");
        ui->lineEditRoll->setFocus();
        ui->lineEditRoll->selectAll();
        return;
    }

    // Remove the duplicate validation - validateFields() already checks this

    Student s;
    s.name = ui->lineEditName->text().trimmed();
    s.roll = ui->lineEditRoll->text().trimmed();
    s.father = ui->lineEditFather->text().trimmed();
    s.caste = ui->lineEditCaste->text().trimmed();
    s.district = ui->lineEditDistrict->text().trimmed();
    s.gpa = ui->lineEditGPA->text().trimmed();

    students.append(s);
    // Debug message
    qDebug() << "Adding student:" << s.name << s.roll;

    // Save all records (including new) to CSV
    saveAllToCSV(students);

    QMessageBox::information(this, "Success", "Student added successfully (saved to CSV)!");

    clearFields();
    ui->pushButtonAdd->setEnabled(true);
    ui->pushButtonUpdate->setEnabled(false);
    ui->pushButtonDelete->setEnabled(false);

    //ui->pushButtonAdd->setStyleSheet("bacground-color rgb(44, 90,16)");



}



// ------------------------------
// NEXT BUTTON FUNCTION
// ------------------------------
void MainWindow::onNextClicked() {
    if (students.isEmpty()) {
        QMessageBox::information(this, "Info", "No student records available!");
        return;
    }

    currentIndex = (currentIndex + 1) % students.size();

    Student s = students[currentIndex];
    ui->lineEditName->setText(s.name);
    ui->lineEditRoll->setText(s.roll);
    ui->lineEditFather->setText(s.father);
    ui->lineEditCaste->setText(s.caste);
    ui->lineEditDistrict->setText(s.district);
    ui->lineEditGPA->setText(s.gpa);

    ui->pushButtonAdd->setEnabled(false);
    ui->pushButtonUpdate->setEnabled(true);
    ui->pushButtonDelete->setEnabled(true);
}

// ------------------------------
// UPDATE BUTTON FUNCTION
// ------------------------------
void MainWindow::onUpdateClicked() {
    if (currentIndex < 0 || currentIndex >= students.size()) return;

    // ✅ ROLL NUMBER CHANGE CHECK - Pehle hi check karein
    Student &s = students[currentIndex];
    QString currentRoll = s.roll.trimmed();
    QString newRoll = ui->lineEditRoll->text().trimmed();

    if (currentRoll != newRoll) {
        QMessageBox::warning(this, "Roll Number Change",
                             "Roll number cannot be changed!\nPlease keep the original roll number.");
        ui->lineEditRoll->setText(currentRoll); // Reset to original roll number
        ui->lineEditRoll->setFocus();
        return;
    }
    // Phir validation check karein
    if (!validateFields()) return;

    // Update allowed fields only
    s.name = ui->lineEditName->text().trimmed();
    s.father = ui->lineEditFather->text().trimmed();
    s.caste = ui->lineEditCaste->text().trimmed();
    s.district = ui->lineEditDistrict->text().trimmed();
    s.gpa = ui->lineEditGPA->text().trimmed();

    saveAllToCSV(students);

    QMessageBox::information(this, "Updated", "Student record updated successfully (CSV updated)!");

    clearFields();
    ui->pushButtonAdd->setEnabled(true);
    ui->pushButtonUpdate->setEnabled(false);
    ui->pushButtonDelete->setEnabled(false);
}

// ------------------------------
// DELETE BUTTON FUNCTION
// ------------------------------
void MainWindow::onDeleteClicked() {
    if (currentIndex < 0 || currentIndex >= students.size()) return;

    students.removeAt(currentIndex);

    if (currentIndex >= students.size())
        currentIndex = students.size() - 1;

    saveAllToCSV(students);

    if (students.isEmpty()) {
        clearFields();
        ui->pushButtonAdd->setEnabled(true);
        ui->pushButtonUpdate->setEnabled(false);
        ui->pushButtonDelete->setEnabled(false);
    } else {
        onNextClicked();
    }

    QMessageBox::information(this, "Deleted", "Student record deleted successfully from CSV!");
}

void MainWindow::on_pushButton_clicked()
{
    // Debug - check all fields
    qDebug() << "Roll field text:" << ui->lineEditRoll_2->text();
    qDebug() << "Roll field trimmed:" << ui->lineEditRoll_2->text().trimmed();
    qDebug() << "Is roll field empty?" << ui->lineEditRoll_2->text().trimmed().isEmpty();

    // Check other fields bhi
    qDebug() << "Name field:" << ui->lineEditName->text();
    qDebug() << "Total students:" << students.size();
 ui->lineEditRoll_2->setFocus();

    // Yahan direct search ka code likhein
    QString rollToSearch = ui->lineEditRoll_2->text().trimmed();

    if (rollToSearch.isEmpty()) {
        QMessageBox::warning(this, "Search Error", "Please enter roll number!");
        ui->lineEditRoll_2->setFocus();
        return;
    }

    for (int i = 0; i < students.size(); i++) {
        if (students[i].roll.trimmed() == rollToSearch) {
            currentIndex = i;
            Student s = students[i];

            ui->lineEditName->setText(s.name);
            ui->lineEditRoll->setText(s.roll);
            ui->lineEditFather->setText(s.father);
            ui->lineEditCaste->setText(s.caste);
            ui->lineEditDistrict->setText(s.district);
            ui->lineEditGPA->setText(s.gpa);

            ui->pushButtonAdd->setEnabled(false);
            ui->pushButtonUpdate->setEnabled(true);
            ui->pushButtonDelete->setEnabled(true);

            // ✅ YE LINE ADD KAREIN - Search field empty karein
            ui->lineEditRoll_2->clear();

            QMessageBox::information(this, "Success", "Student found!");
            return;
        }
    }

    QMessageBox::information(this, "Not Found", "No student with this roll number!");

}

