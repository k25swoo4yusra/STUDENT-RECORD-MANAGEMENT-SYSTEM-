
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QString>

    // ------------------------------
    // Structure to store one student
    // ------------------------------
    struct Student {
    QString name;
    QString roll;
    QString father;
    QString caste;
    QString district;
    QString gpa;
};

// ------------------------------
// MainWindow Class Declaration
// ------------------------------
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Slots for button actions
    void onAddClicked();     // Add new record
    void onNextClicked();    // Show next record
    void onUpdateClicked();  // Update existing record
    void onDeleteClicked();  // Delete record
   // void onSearchClicked();

  void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    QVector<Student> students; // All student records
    int currentIndex;          // Current record index

    QString escapeCsv(const QString& field);
    void saveAllToCSV(const QVector<Student>& students);
    bool validateFields();
    void clearFields();
    void loadFromCSV();
};


#endif // MAINWINDOW_H
