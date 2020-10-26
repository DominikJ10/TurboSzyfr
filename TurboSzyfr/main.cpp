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

QString MainWindow::cezar(QString text, int s)
{
    QString result = "";
    QChar tempqchar;
    int tempint;

    for (int i=0;i<text.length();i++)
    {
        tempqchar = text[i];
        tempint = tempqchar.QChar::unicode();

        if (tempint == 9 || tempint == 10 || tempint == 13 || tempint == 32)
            result += QChar(tempint);

        else if (text[i].isUpper())
            result += QChar(((tempint+s-65)%26) +65);

        else
            result += QChar(((tempint+s-97)%26) +97);
    }

    return result;
}
