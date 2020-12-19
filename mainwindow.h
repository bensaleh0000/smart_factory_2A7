#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "conge.h"
#include "employe.h"
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

private slots:
    void on_pushButton_12_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_6_clicked();

    void on_label_58_linkActivated(const QString &link);

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_tabWidget_2_currentChanged(int index);

    void on_pushButton_8_clicked();

    void on_tabWidget_3_currentChanged(int index);

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::MainWindow *ui;
    conge conge ;
    employe employe ;
};
#endif // MAINWINDOW_H
