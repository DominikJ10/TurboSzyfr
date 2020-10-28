#include "mainwindow.h"

#include <QApplication>
#include <QString>
#include <QFileDialog>
#include <string>

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
