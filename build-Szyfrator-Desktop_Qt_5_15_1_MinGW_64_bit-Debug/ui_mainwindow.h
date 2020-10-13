/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtoncezar;
    QRadioButton *radioButtonkey;
    QRadioButton *radioButtonhash1;
    QRadioButton *radioButtonhash2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButtonszyfruj;
    QRadioButton *radioButtondeszyfruj;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(788, 658);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(40, 30, 331, 131));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 230, 499, 21));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButtoncezar = new QRadioButton(widget);
        radioButtoncezar->setObjectName(QString::fromUtf8("radioButtoncezar"));

        horizontalLayout->addWidget(radioButtoncezar);

        radioButtonkey = new QRadioButton(widget);
        radioButtonkey->setObjectName(QString::fromUtf8("radioButtonkey"));

        horizontalLayout->addWidget(radioButtonkey);

        radioButtonhash1 = new QRadioButton(widget);
        radioButtonhash1->setObjectName(QString::fromUtf8("radioButtonhash1"));

        horizontalLayout->addWidget(radioButtonhash1);

        radioButtonhash2 = new QRadioButton(widget);
        radioButtonhash2->setObjectName(QString::fromUtf8("radioButtonhash2"));

        horizontalLayout->addWidget(radioButtonhash2);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(120, 180, 138, 21));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButtonszyfruj = new QRadioButton(widget1);
        radioButtonszyfruj->setObjectName(QString::fromUtf8("radioButtonszyfruj"));

        horizontalLayout_2->addWidget(radioButtonszyfruj);

        radioButtondeszyfruj = new QRadioButton(widget1);
        radioButtondeszyfruj->setObjectName(QString::fromUtf8("radioButtondeszyfruj"));

        horizontalLayout_2->addWidget(radioButtondeszyfruj);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        radioButtoncezar->setText(QCoreApplication::translate("MainWindow", "Szyfr Cezara", nullptr));
        radioButtonkey->setText(QCoreApplication::translate("MainWindow", "Klucz publiczny/prywatny", nullptr));
        radioButtonhash1->setText(QCoreApplication::translate("MainWindow", "Funkcja hashuj\304\205ca 1", nullptr));
        radioButtonhash2->setText(QCoreApplication::translate("MainWindow", "Funkcja hashuj\304\205ca 2", nullptr));
        radioButtonszyfruj->setText(QCoreApplication::translate("MainWindow", "Szyfruj", nullptr));
        radioButtondeszyfruj->setText(QCoreApplication::translate("MainWindow", "Deszyfruj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
