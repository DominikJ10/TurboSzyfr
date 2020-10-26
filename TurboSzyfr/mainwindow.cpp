#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "main.cpp"

#include <QApplication>
#include <QString>
#include <QFileDialog>
#include <QFile>
#include <QByteArray>
#include <QFileDevice>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
   ui->setupUi(this);
}


//TAB 1 - CEZAR


QString inputfile, outputfile; //pliki i ich zawartości
QString input, output, text; //zawartości samych pól
int shift;





MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonwykonaj_clicked()
{
    text = ui->plainTextEditinput->toPlainText();

    if (ui->radioButtonszyfr->isChecked())
    output = cezar(text, shift);

    else if (ui->radioButtondeszyfr->isChecked())
    output = cezar(text, 26 - shift);


    ui->plainTextEditoutput->setPlainText(output);


    //bierze zawartość pola input, przerabia i daje na pole output
    //dopiero przycisk zapisz zapisuje
}

void MainWindow::on_pushButtonwczytaj_clicked()
{
    ui->plainTextEditinput->clear();
    inputfile = QFileDialog::getOpenFileName(this,tr("Wczytaj..."),"/",tr("Text files (*.txt)")); //wybieranie pliku

    QFile file(inputfile);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        ui->plainTextEditinput->insertPlainText(line);
    }
}

void MainWindow::on_pushButtonzapisz_clicked()
{
    outputfile = QFileDialog::getSaveFileName(this,tr("Zapisz jako..."),"/",tr("Text files (*.txt)"));
}

void MainWindow::on_spinBoxprzesuniecie_valueChanged(int arg1)
{
    shift = ui->spinBoxprzesuniecie->value();
}
