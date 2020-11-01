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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
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
    QSpinBox *spinBoxprzesuniecie;
    QLabel *label_2;
    QPushButton *pushButtonwczytaj;
    QPushButton *pushButtonzapisz;
    QLabel *label_3;
    QPushButton *pushButtonwykonaj;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonszyfr;
    QRadioButton *radioButtondeszyfr;
    QPlainTextEdit *plainTextEditoutput;
    QWidget *tab_2;
    QPushButton *pushButtonwczytaj2;
    QLabel *label_5;
    QLabel *label_6;
    QPlainTextEdit *plainTextEditoutput2;
    QPlainTextEdit *plainTextEditinput2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonsha1;
    QPushButton *pushButtonsha256;
    QPushButton *pushButtonsha512;
    QPushButton *pushButtonmd5;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtontekst2;
    QRadioButton *radioButtonplik2;
    QWidget *tab_3;
    QLabel *label_7;
    QPlainTextEdit *plainTextEditinput3;
    QLabel *label_8;
    QPlainTextEdit *plainTextEditoutput3;
    QLabel *label_9;
    QPushButton *pushButtonszyfruj3;
    QPushButton *pushButtonwczytaj3;
    QPushButton *pushButtonzapisz3;
    QPlainTextEdit *plainTextEditklucz3;
    QPushButton *pushButtongeneruj3;
    QWidget *tab_4;
    QPushButton *pushButtondeszyfruj4;
    QPlainTextEdit *plainTextEditinput4;
    QLabel *label_11;
    QPlainTextEdit *plainTextEditoutput4;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *pushButtonwczytaj4;
    QPushButton *pushButtonzapisz4;
    QPlainTextEdit *plainTextEditklucz4;
    QPushButton *pushButtongeneruj4;

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
        label->setGeometry(QRect(201, 190, 71, 22));
        plainTextEditinput = new QPlainTextEdit(tab);
        plainTextEditinput->setObjectName(QString::fromUtf8("plainTextEditinput"));
        plainTextEditinput->setGeometry(QRect(21, 70, 481, 101));
        spinBoxprzesuniecie = new QSpinBox(tab);
        spinBoxprzesuniecie->setObjectName(QString::fromUtf8("spinBoxprzesuniecie"));
        spinBoxprzesuniecie->setGeometry(QRect(271, 190, 51, 22));
        spinBoxprzesuniecie->setValue(1);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(21, 50, 47, 13));
        pushButtonwczytaj = new QPushButton(tab);
        pushButtonwczytaj->setObjectName(QString::fromUtf8("pushButtonwczytaj"));
        pushButtonwczytaj->setGeometry(QRect(410, 180, 91, 21));
        pushButtonzapisz = new QPushButton(tab);
        pushButtonzapisz->setObjectName(QString::fromUtf8("pushButtonzapisz"));
        pushButtonzapisz->setGeometry(QRect(409, 510, 91, 21));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 380, 47, 13));
        pushButtonwykonaj = new QPushButton(tab);
        pushButtonwykonaj->setObjectName(QString::fromUtf8("pushButtonwykonaj"));
        pushButtonwykonaj->setGeometry(QRect(180, 290, 161, 71));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(180, 240, 161, 21));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButtonszyfr = new QRadioButton(layoutWidget);
        radioButtonszyfr->setObjectName(QString::fromUtf8("radioButtonszyfr"));
        radioButtonszyfr->setChecked(true);

        horizontalLayout->addWidget(radioButtonszyfr);

        radioButtondeszyfr = new QRadioButton(layoutWidget);
        radioButtondeszyfr->setObjectName(QString::fromUtf8("radioButtondeszyfr"));

        horizontalLayout->addWidget(radioButtondeszyfr);

        plainTextEditoutput = new QPlainTextEdit(tab);
        plainTextEditoutput->setObjectName(QString::fromUtf8("plainTextEditoutput"));
        plainTextEditoutput->setGeometry(QRect(20, 400, 481, 101));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pushButtonwczytaj2 = new QPushButton(tab_2);
        pushButtonwczytaj2->setObjectName(QString::fromUtf8("pushButtonwczytaj2"));
        pushButtonwczytaj2->setGeometry(QRect(369, 150, 131, 21));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 20, 47, 13));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 420, 47, 13));
        plainTextEditoutput2 = new QPlainTextEdit(tab_2);
        plainTextEditoutput2->setObjectName(QString::fromUtf8("plainTextEditoutput2"));
        plainTextEditoutput2->setGeometry(QRect(20, 440, 481, 61));
        plainTextEditinput2 = new QPlainTextEdit(tab_2);
        plainTextEditinput2->setObjectName(QString::fromUtf8("plainTextEditinput2"));
        plainTextEditinput2->setGeometry(QRect(20, 40, 481, 101));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 250, 491, 101));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonsha1 = new QPushButton(layoutWidget1);
        pushButtonsha1->setObjectName(QString::fromUtf8("pushButtonsha1"));

        horizontalLayout_2->addWidget(pushButtonsha1);

        pushButtonsha256 = new QPushButton(layoutWidget1);
        pushButtonsha256->setObjectName(QString::fromUtf8("pushButtonsha256"));

        horizontalLayout_2->addWidget(pushButtonsha256);

        pushButtonsha512 = new QPushButton(layoutWidget1);
        pushButtonsha512->setObjectName(QString::fromUtf8("pushButtonsha512"));

        horizontalLayout_2->addWidget(pushButtonsha512);

        pushButtonmd5 = new QPushButton(layoutWidget1);
        pushButtonmd5->setObjectName(QString::fromUtf8("pushButtonmd5"));

        horizontalLayout_2->addWidget(pushButtonmd5);

        layoutWidget2 = new QWidget(tab_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(310, 150, 53, 46));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButtontekst2 = new QRadioButton(layoutWidget2);
        radioButtontekst2->setObjectName(QString::fromUtf8("radioButtontekst2"));
        radioButtontekst2->setChecked(true);

        verticalLayout->addWidget(radioButtontekst2);

        radioButtonplik2 = new QRadioButton(layoutWidget2);
        radioButtonplik2->setObjectName(QString::fromUtf8("radioButtonplik2"));

        verticalLayout->addWidget(radioButtonplik2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 30, 47, 13));
        plainTextEditinput3 = new QPlainTextEdit(tab_3);
        plainTextEditinput3->setObjectName(QString::fromUtf8("plainTextEditinput3"));
        plainTextEditinput3->setGeometry(QRect(20, 50, 481, 101));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 420, 47, 13));
        plainTextEditoutput3 = new QPlainTextEdit(tab_3);
        plainTextEditoutput3->setObjectName(QString::fromUtf8("plainTextEditoutput3"));
        plainTextEditoutput3->setGeometry(QRect(20, 440, 481, 101));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 190, 81, 16));
        pushButtonszyfruj3 = new QPushButton(tab_3);
        pushButtonszyfruj3->setObjectName(QString::fromUtf8("pushButtonszyfruj3"));
        pushButtonszyfruj3->setGeometry(QRect(180, 340, 161, 71));
        pushButtonwczytaj3 = new QPushButton(tab_3);
        pushButtonwczytaj3->setObjectName(QString::fromUtf8("pushButtonwczytaj3"));
        pushButtonwczytaj3->setGeometry(QRect(410, 160, 91, 21));
        pushButtonzapisz3 = new QPushButton(tab_3);
        pushButtonzapisz3->setObjectName(QString::fromUtf8("pushButtonzapisz3"));
        pushButtonzapisz3->setGeometry(QRect(410, 550, 91, 21));
        plainTextEditklucz3 = new QPlainTextEdit(tab_3);
        plainTextEditklucz3->setObjectName(QString::fromUtf8("plainTextEditklucz3"));
        plainTextEditklucz3->setGeometry(QRect(20, 210, 481, 31));
        pushButtongeneruj3 = new QPushButton(tab_3);
        pushButtongeneruj3->setObjectName(QString::fromUtf8("pushButtongeneruj3"));
        pushButtongeneruj3->setGeometry(QRect(370, 250, 131, 31));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        pushButtondeszyfruj4 = new QPushButton(tab_4);
        pushButtondeszyfruj4->setObjectName(QString::fromUtf8("pushButtondeszyfruj4"));
        pushButtondeszyfruj4->setGeometry(QRect(180, 340, 161, 71));
        plainTextEditinput4 = new QPlainTextEdit(tab_4);
        plainTextEditinput4->setObjectName(QString::fromUtf8("plainTextEditinput4"));
        plainTextEditinput4->setGeometry(QRect(20, 50, 481, 101));
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 30, 47, 13));
        plainTextEditoutput4 = new QPlainTextEdit(tab_4);
        plainTextEditoutput4->setObjectName(QString::fromUtf8("plainTextEditoutput4"));
        plainTextEditoutput4->setGeometry(QRect(20, 440, 481, 101));
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 420, 47, 13));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 190, 81, 16));
        pushButtonwczytaj4 = new QPushButton(tab_4);
        pushButtonwczytaj4->setObjectName(QString::fromUtf8("pushButtonwczytaj4"));
        pushButtonwczytaj4->setGeometry(QRect(410, 160, 91, 21));
        pushButtonzapisz4 = new QPushButton(tab_4);
        pushButtonzapisz4->setObjectName(QString::fromUtf8("pushButtonzapisz4"));
        pushButtonzapisz4->setGeometry(QRect(410, 550, 91, 21));
        plainTextEditklucz4 = new QPlainTextEdit(tab_4);
        plainTextEditklucz4->setObjectName(QString::fromUtf8("plainTextEditklucz4"));
        plainTextEditklucz4->setGeometry(QRect(20, 210, 481, 31));
        pushButtongeneruj4 = new QPushButton(tab_4);
        pushButtongeneruj4->setObjectName(QString::fromUtf8("pushButtongeneruj4"));
        pushButtongeneruj4->setGeometry(QRect(370, 250, 131, 31));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(tabWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Szyfrator", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Przesuni\304\231cie:", nullptr));
        spinBoxprzesuniecie->setPrefix(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Input:", nullptr));
        pushButtonwczytaj->setText(QCoreApplication::translate("MainWindow", "Wczytaj...", nullptr));
        pushButtonzapisz->setText(QCoreApplication::translate("MainWindow", "Zapisz jako...", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Output:", nullptr));
        pushButtonwykonaj->setText(QCoreApplication::translate("MainWindow", "Wykonaj", nullptr));
        radioButtonszyfr->setText(QCoreApplication::translate("MainWindow", "Szyfruj", nullptr));
        radioButtondeszyfr->setText(QCoreApplication::translate("MainWindow", "Deszyfruj", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Szyfr Cezara", nullptr));
        pushButtonwczytaj2->setText(QCoreApplication::translate("MainWindow", "Wczytaj...", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Input:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Output:", nullptr));
        pushButtonsha1->setText(QCoreApplication::translate("MainWindow", "SHA-1", nullptr));
        pushButtonsha256->setText(QCoreApplication::translate("MainWindow", "SHA-256", nullptr));
        pushButtonsha512->setText(QCoreApplication::translate("MainWindow", "SHA-512", nullptr));
        pushButtonmd5->setText(QCoreApplication::translate("MainWindow", "MD5", nullptr));
        radioButtontekst2->setText(QCoreApplication::translate("MainWindow", "Tekst", nullptr));
        radioButtonplik2->setText(QCoreApplication::translate("MainWindow", "Plik", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Funkcje hash", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Input:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Output:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Klucz publiczny:", nullptr));
        pushButtonszyfruj3->setText(QCoreApplication::translate("MainWindow", "Szyfruj", nullptr));
        pushButtonwczytaj3->setText(QCoreApplication::translate("MainWindow", "Wczytaj...", nullptr));
        pushButtonzapisz3->setText(QCoreApplication::translate("MainWindow", "Zapisz jako...", nullptr));
        pushButtongeneruj3->setText(QCoreApplication::translate("MainWindow", "Generuj par\304\231 kluczy", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "RSA szyfrowanie", nullptr));
        pushButtondeszyfruj4->setText(QCoreApplication::translate("MainWindow", "Deszyfruj", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Input:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Output:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Klucz prywatny:", nullptr));
        pushButtonwczytaj4->setText(QCoreApplication::translate("MainWindow", "Wczytaj...", nullptr));
        pushButtonzapisz4->setText(QCoreApplication::translate("MainWindow", "Zapisz jako...", nullptr));
        pushButtongeneruj4->setText(QCoreApplication::translate("MainWindow", "Generuj par\304\231 kluczy", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "RSA deszyfrowanie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
