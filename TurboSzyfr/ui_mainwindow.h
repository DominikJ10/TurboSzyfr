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
    QRadioButton *radioButtonszyfr;
    QRadioButton *radioButtondeszyfr;
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
    QPushButton *pushButton;
    QWidget *tab_2;
    QLabel *label_7;
    QPlainTextEdit *plainTextEditinput_2;
    QLabel *label_8;
    QPlainTextEdit *plainTextEditoutput_2;
    QLineEdit *lineEdit_2;
    QLabel *label_9;
    QPushButton *pushButton_2;
    QPushButton *pushButtonwczytaj_2;
    QPushButton *pushButtonzapisz_2;
    QWidget *tab_4;
    QPushButton *pushButton_3;
    QPlainTextEdit *plainTextEditinput_3;
    QLabel *label_11;
    QPlainTextEdit *plainTextEditoutput_3;
    QLineEdit *lineEdit_4;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *pushButtonwczytaj_3;
    QPushButton *pushButtonzapisz_3;

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
        plainTextEditoutput = new QPlainTextEdit(tab);
        plainTextEditoutput->setObjectName(QString::fromUtf8("plainTextEditoutput"));
        plainTextEditoutput->setGeometry(QRect(20, 400, 481, 101));
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

        horizontalLayout->addWidget(radioButtonszyfr);

        radioButtondeszyfr = new QRadioButton(layoutWidget);
        radioButtondeszyfr->setObjectName(QString::fromUtf8("radioButtondeszyfr"));

        horizontalLayout->addWidget(radioButtondeszyfr);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        textEdit = new QTextEdit(tab_3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 180, 481, 101));
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(420, 290, 80, 21));
        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 440, 481, 21));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 160, 47, 13));
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

        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 310, 161, 71));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 30, 47, 13));
        plainTextEditinput_2 = new QPlainTextEdit(tab_2);
        plainTextEditinput_2->setObjectName(QString::fromUtf8("plainTextEditinput_2"));
        plainTextEditinput_2->setGeometry(QRect(20, 50, 481, 101));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 420, 47, 13));
        plainTextEditoutput_2 = new QPlainTextEdit(tab_2);
        plainTextEditoutput_2->setObjectName(QString::fromUtf8("plainTextEditoutput_2"));
        plainTextEditoutput_2->setGeometry(QRect(20, 440, 481, 101));
        lineEdit_2 = new QLineEdit(tab_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 210, 481, 21));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 190, 81, 16));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 340, 161, 71));
        pushButtonwczytaj_2 = new QPushButton(tab_2);
        pushButtonwczytaj_2->setObjectName(QString::fromUtf8("pushButtonwczytaj_2"));
        pushButtonwczytaj_2->setGeometry(QRect(410, 160, 91, 21));
        pushButtonzapisz_2 = new QPushButton(tab_2);
        pushButtonzapisz_2->setObjectName(QString::fromUtf8("pushButtonzapisz_2"));
        pushButtonzapisz_2->setGeometry(QRect(410, 550, 91, 21));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        pushButton_3 = new QPushButton(tab_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 340, 161, 71));
        plainTextEditinput_3 = new QPlainTextEdit(tab_4);
        plainTextEditinput_3->setObjectName(QString::fromUtf8("plainTextEditinput_3"));
        plainTextEditinput_3->setGeometry(QRect(20, 50, 481, 101));
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 30, 47, 13));
        plainTextEditoutput_3 = new QPlainTextEdit(tab_4);
        plainTextEditoutput_3->setObjectName(QString::fromUtf8("plainTextEditoutput_3"));
        plainTextEditoutput_3->setGeometry(QRect(20, 440, 481, 101));
        lineEdit_4 = new QLineEdit(tab_4);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(20, 210, 481, 21));
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 420, 47, 13));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 190, 81, 16));
        pushButtonwczytaj_3 = new QPushButton(tab_4);
        pushButtonwczytaj_3->setObjectName(QString::fromUtf8("pushButtonwczytaj_3"));
        pushButtonwczytaj_3->setGeometry(QRect(410, 160, 91, 21));
        pushButtonzapisz_3 = new QPushButton(tab_4);
        pushButtonzapisz_3->setObjectName(QString::fromUtf8("pushButtonzapisz_3"));
        pushButtonzapisz_3->setGeometry(QRect(410, 550, 91, 21));
        tabWidget->addTab(tab_4, QString());
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
        pushButtonzapisz->setText(QCoreApplication::translate("MainWindow", "Zapisz jako...", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Output:", nullptr));
        pushButtonwykonaj->setText(QCoreApplication::translate("MainWindow", "Wykonaj", nullptr));
        radioButtonszyfr->setText(QCoreApplication::translate("MainWindow", "Szyfruj", nullptr));
        radioButtondeszyfr->setText(QCoreApplication::translate("MainWindow", "Deszyfruj", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Szyfr Cezara", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Wczytaj...", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Input:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Output:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Funkcja:", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "SHA-256", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "MD5", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Wykonaj", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Funkcje hash", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Input:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Output:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Klucz publiczny:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Wykonaj", nullptr));
        pushButtonwczytaj_2->setText(QCoreApplication::translate("MainWindow", "Wczytaj...", nullptr));
        pushButtonzapisz_2->setText(QCoreApplication::translate("MainWindow", "Zapisz jako...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "RSA szyfrowanie", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Wykonaj", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Input:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Output:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Klucz prywatny:", nullptr));
        pushButtonwczytaj_3->setText(QCoreApplication::translate("MainWindow", "Wczytaj...", nullptr));
        pushButtonzapisz_3->setText(QCoreApplication::translate("MainWindow", "Zapisz jako...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "RSA deszyfrowanie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
