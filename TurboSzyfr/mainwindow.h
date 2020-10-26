#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTabWidget>
#include <QLabel>
#include <string>
#include <iostream>

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
    void on_pushButtonwykonaj_clicked();

    void on_pushButtonwczytaj_clicked();

    void on_pushButtonzapisz_clicked();

    void on_spinBoxprzesuniecie_valueChanged(int arg1);

    QString cezar(QString text, int s);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
