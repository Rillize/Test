#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Calculator.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
Calculator Calc;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_Digit1_clicked();

    void on_Digit2_clicked();

    void on_Digit3_clicked();

    void on_comma_clicked();

    void on_Digit4_clicked();

    void on_Digit5_clicked();

    void on_Digit6_clicked();

    void on_Digit7_clicked();

    void on_Digit8_clicked();

    void on_Digit9_clicked();

    void on_Digit0_clicked();

    void on_division_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
