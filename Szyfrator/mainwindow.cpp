#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_radioButtondeszyfruj_clicked()
{
    ui->radioButtonhash1->setEnabled(false);
    ui->radioButtonhash2->setEnabled(false);
}

void MainWindow::on_radioButtonszyfruj_clicked()
{
    ui->radioButtonhash1->setEnabled(true);
    ui->radioButtonhash2->setEnabled(true);
}
