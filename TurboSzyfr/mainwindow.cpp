#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QApplication>
#include <QString>
#include <QFileDialog>
#include <QFile>
#include <QByteArray>
#include <QFileDevice>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
   ui->setupUi(this);
}


//TAB 1 - CEZAR


QString input, output;




MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonwykonaj_clicked()
{
    //bierze zawartość pola input, przerabia i daje na pole output
    //dopiero przycisk zapisz zapisuje (no shit)
}

void MainWindow::on_pushButtonwczytaj_clicked()
{
    ui->plainTextEditinput->clear();
    input = QFileDialog::getOpenFileName(this,tr("Wczytaj..."),"/",tr("Text files (*.txt)")); //wybieranie pliku

    QFile file(input);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        ui->plainTextEditinput->insertPlainText(line);
    }
}

void MainWindow::on_pushButtonzapisz_clicked()
{
    output = QFileDialog::getSaveFileName(this,tr("Zapisz jako..."),"/",tr("Text files (*.txt)"));
}
