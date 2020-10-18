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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QPlainTextEdit *plainTextEditinput;
    QPlainTextEdit *plainTextEditoutput;
    QSpinBox *spinBoxprzesuniecie;
    QLabel *label_2;
    QPushButton *pushButtonwczytaj;
    QPushButton *pushButtonzapisz;
    QLabel *label_3;
    QPushButton *pushButtonwykonaj;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonszyfruj;
    QRadioButton *radioButtondeszyfruj;
    QWidget *tab_3;
    QTextEdit *textEdit;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QWidget *tab_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(524, 643);
        MainWindow->setAutoFillBackground(true);
        tabWidget = new QTabWidget(MainWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 170, 71, 22));
        plainTextEditinput = new QPlainTextEdit(tab);
        plainTextEditinput->setObjectName(QString::fromUtf8("plainTextEditinput"));
        plainTextEditinput->setGeometry(QRect(20, 50, 481, 101));
        plainTextEditoutput = new QPlainTextEdit(tab);
        plainTextEditoutput->setObjectName(QString::fromUtf8("plainTextEditoutput"));
        plainTextEditoutput->setGeometry(QRect(20, 400, 481, 101));
        spinBoxprzesuniecie = new QSpinBox(tab);
        spinBoxprzesuniecie->setObjectName(QString::fromUtf8("spinBoxprzesuniecie"));
        spinBoxprzesuniecie->setGeometry(QRect(270, 170, 51, 22));
        spinBoxprzesuniecie->setValue(13);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 30, 47, 13));
        pushButtonwczytaj = new QPushButton(tab);
        pushButtonwczytaj->setObjectName(QString::fromUtf8("pushButtonwczytaj"));
        pushButtonwczytaj->setGeometry(QRect(419, 160, 81, 21));
        pushButtonzapisz = new QPushButton(tab);
        pushButtonzapisz->setObjectName(QString::fromUtf8("pushButtonzapisz"));
        pushButtonzapisz->setGeometry(QRect(420, 510, 80, 21));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 380, 47, 13));
        pushButtonwykonaj = new QPushButton(tab);
        pushButtonwykonaj->setObjectName(QString::fromUtf8("pushButtonwykonaj"));
        pushButtonwykonaj->setGeometry(QRect(180, 300, 161, 71));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 220, 138, 21));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButtonszyfruj = new QRadioButton(layoutWidget);
        radioButtonszyfruj->setObjectName(QString::fromUtf8("radioButtonszyfruj"));

        horizontalLayout->addWidget(radioButtonszyfruj);

        radioButtondeszyfruj = new QRadioButton(layoutWidget);
        radioButtondeszyfruj->setObjectName(QString::fromUtf8("radioButtondeszyfruj"));

        horizontalLayout->addWidget(radioButtondeszyfruj);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        textEdit = new QTextEdit(tab_3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 220, 481, 101));
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(420, 330, 80, 21));
        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 440, 481, 21));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 200, 47, 13));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 420, 47, 13));
        layoutWidget1 = new QWidget(tab_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 30, 81, 65));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        radioButton_3 = new QRadioButton(layoutWidget1);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(layoutWidget1);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout->addWidget(radioButton_4);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(tabWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Szyfrator", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Przesuni\304\231cie:", nullptr));
        spinBoxprzesuniecie->setPrefix(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Input:", nullptr));
        pushButtonwczytaj->setText(QCoreApplication::translate("MainWindow", "Wczytaj...", nullptr));
        pushButtonzapisz->setText(QCoreApplication::translate("MainWindow", "Zapisz...", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Output:", nullptr));
        pushButtonwykonaj->setText(QCoreApplication::translate("MainWindow", "Wykonaj", nullptr));
        radioButtonszyfruj->setText(QCoreApplication::translate("MainWindow", "Szyfruj", nullptr));
        radioButtondeszyfruj->setText(QCoreApplication::translate("MainWindow", "Deszyfruj", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Szyfr Cezara", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Wczytaj...", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Input:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Output:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Funkcja:", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "SHA-256", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "MD5", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Funkcje hash", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Klucz publiczny/prywatny", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
