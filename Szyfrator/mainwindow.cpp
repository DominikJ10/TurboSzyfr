#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QApplication>
#include <QString>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
   ui->setupUi(this);
}


//TAB 1 - CEZAR


QString plik;




MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonwykonaj_clicked()
{

}

void MainWindow::on_pushButtonwczytaj_clicked()
{
    plik = QFileDialog::getOpenFileName(this,tr("Text files (*.txt)")); //wybieranie pliku
    ui->plainTextEditinput->setPlainText(plik);
}
