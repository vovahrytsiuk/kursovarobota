/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QRadioButton *input_keyboard;
    QRadioButton *input_file;
    QRadioButton *input_random;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QRadioButton *b_bisection;
    QRadioButton *b_newthon;
    QRadioButton *b_secant;
    QLineEdit *le_euations;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QPushButton *btn_calculate;
    QLabel *lbl_power;
    QLineEdit *le_power;
    QLabel *label_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLabel *lbl_inputequations;
    QPushButton *b_choose_file;
    QLabel *lbl_inforesult;
    QLabel *lbl_result;
    QLabel *label_file;
    QLineEdit *le_filename;
    QLabel *lbl_iterationinfo;
    QLabel *lbl_addinfo;
    QLabel *lbl_multinfo;
    QLabel *lbl_iterationnumber;
    QLabel *lbl_addnumber;
    QLabel *lbl_multiplicationnumber;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 700);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 551, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(15);
        label_4->setFont(font);

        horizontalLayout->addWidget(label_4);

        input_keyboard = new QRadioButton(horizontalLayoutWidget);
        input_keyboard->setObjectName(QString::fromUtf8("input_keyboard"));
        input_keyboard->setFont(font);

        horizontalLayout->addWidget(input_keyboard);

        input_file = new QRadioButton(horizontalLayoutWidget);
        input_file->setObjectName(QString::fromUtf8("input_file"));
        input_file->setFont(font);

        horizontalLayout->addWidget(input_file);

        input_random = new QRadioButton(horizontalLayoutWidget);
        input_random->setObjectName(QString::fromUtf8("input_random"));
        input_random->setFont(font);

        horizontalLayout->addWidget(input_random);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 360, 551, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        b_bisection = new QRadioButton(horizontalLayoutWidget_2);
        b_bisection->setObjectName(QString::fromUtf8("b_bisection"));
        b_bisection->setFont(font);

        horizontalLayout_2->addWidget(b_bisection);

        b_newthon = new QRadioButton(horizontalLayoutWidget_2);
        b_newthon->setObjectName(QString::fromUtf8("b_newthon"));
        b_newthon->setFont(font);

        horizontalLayout_2->addWidget(b_newthon);

        b_secant = new QRadioButton(horizontalLayoutWidget_2);
        b_secant->setObjectName(QString::fromUtf8("b_secant"));
        b_secant->setFont(font);

        horizontalLayout_2->addWidget(b_secant);

        le_euations = new QLineEdit(centralwidget);
        le_euations->setObjectName(QString::fromUtf8("le_euations"));
        le_euations->setEnabled(true);
        le_euations->setGeometry(QRect(130, 210, 391, 40));
        le_euations->setFont(font);
        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 460, 160, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(24);
        label->setFont(font1);

        horizontalLayout_3->addWidget(label);

        lineEdit_2 = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font);

        horizontalLayout_3->addWidget(lineEdit_2);

        btn_calculate = new QPushButton(centralwidget);
        btn_calculate->setObjectName(QString::fromUtf8("btn_calculate"));
        btn_calculate->setGeometry(QRect(380, 460, 181, 91));
        btn_calculate->setFont(font);
        lbl_power = new QLabel(centralwidget);
        lbl_power->setObjectName(QString::fromUtf8("lbl_power"));
        lbl_power->setGeometry(QRect(10, 150, 141, 16));
        lbl_power->setFont(font);
        le_power = new QLineEdit(centralwidget);
        le_power->setObjectName(QString::fromUtf8("le_power"));
        le_power->setGeometry(QRect(150, 140, 121, 40));
        le_power->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 460, 42, 79));
        label_2->setFont(font1);
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setEnabled(true);
        lineEdit_4->setGeometry(QRect(310, 490, 60, 22));
        lineEdit_4->setFont(font);
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 490, 60, 22));
        lbl_inputequations = new QLabel(centralwidget);
        lbl_inputequations->setObjectName(QString::fromUtf8("lbl_inputequations"));
        lbl_inputequations->setGeometry(QRect(10, 220, 111, 16));
        lbl_inputequations->setFont(font);
        b_choose_file = new QPushButton(centralwidget);
        b_choose_file->setObjectName(QString::fromUtf8("b_choose_file"));
        b_choose_file->setGeometry(QRect(420, 270, 121, 41));
        lbl_inforesult = new QLabel(centralwidget);
        lbl_inforesult->setObjectName(QString::fromUtf8("lbl_inforesult"));
        lbl_inforesult->setGeometry(QRect(40, 580, 151, 16));
        lbl_inforesult->setFont(font);
        lbl_result = new QLabel(centralwidget);
        lbl_result->setObjectName(QString::fromUtf8("lbl_result"));
        lbl_result->setGeometry(QRect(200, 580, 361, 21));
        lbl_result->setFont(font);
        label_file = new QLabel(centralwidget);
        label_file->setObjectName(QString::fromUtf8("label_file"));
        label_file->setGeometry(QRect(10, 280, 71, 16));
        label_file->setFont(font);
        le_filename = new QLineEdit(centralwidget);
        le_filename->setObjectName(QString::fromUtf8("le_filename"));
        le_filename->setGeometry(QRect(90, 270, 331, 40));
        le_filename->setFont(font);
        lbl_iterationinfo = new QLabel(centralwidget);
        lbl_iterationinfo->setObjectName(QString::fromUtf8("lbl_iterationinfo"));
        lbl_iterationinfo->setGeometry(QRect(590, 540, 155, 20));
        lbl_iterationinfo->setFont(font);
        lbl_addinfo = new QLabel(centralwidget);
        lbl_addinfo->setObjectName(QString::fromUtf8("lbl_addinfo"));
        lbl_addinfo->setGeometry(QRect(590, 560, 155, 20));
        lbl_addinfo->setFont(font);
        lbl_multinfo = new QLabel(centralwidget);
        lbl_multinfo->setObjectName(QString::fromUtf8("lbl_multinfo"));
        lbl_multinfo->setGeometry(QRect(590, 580, 155, 20));
        lbl_multinfo->setFont(font);
        lbl_iterationnumber = new QLabel(centralwidget);
        lbl_iterationnumber->setObjectName(QString::fromUtf8("lbl_iterationnumber"));
        lbl_iterationnumber->setGeometry(QRect(750, 540, 200, 16));
        lbl_iterationnumber->setFont(font);
        lbl_addnumber = new QLabel(centralwidget);
        lbl_addnumber->setObjectName(QString::fromUtf8("lbl_addnumber"));
        lbl_addnumber->setGeometry(QRect(750, 560, 200, 16));
        lbl_addnumber->setFont(font);
        lbl_multiplicationnumber = new QLabel(centralwidget);
        lbl_multiplicationnumber->setObjectName(QString::fromUtf8("lbl_multiplicationnumber"));
        lbl_multiplicationnumber->setGeometry(QRect(750, 580, 200, 16));
        lbl_multiplicationnumber->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Nonlinear Equations ", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Input information:", nullptr));
        input_keyboard->setText(QApplication::translate("MainWindow", "input from keyboard", nullptr));
        input_file->setText(QApplication::translate("MainWindow", "input from file", nullptr));
        input_random->setText(QApplication::translate("MainWindow", "random input", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Choose method:", nullptr));
        b_bisection->setText(QApplication::translate("MainWindow", "Bisection", nullptr));
        b_newthon->setText(QApplication::translate("MainWindow", "Newton's method", nullptr));
        b_secant->setText(QApplication::translate("MainWindow", "Secant method", nullptr));
        label->setText(QApplication::translate("MainWindow", " \316\265 = ", nullptr));
        btn_calculate->setText(QApplication::translate("MainWindow", "Calculate", nullptr));
        lbl_power->setText(QApplication::translate("MainWindow", "Power of equations:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\342\211\244\321\205\342\211\244", nullptr));
        lbl_inputequations->setText(QApplication::translate("MainWindow", "Input equations:", nullptr));
        b_choose_file->setText(QApplication::translate("MainWindow", "Check file", nullptr));
        lbl_inforesult->setText(QApplication::translate("MainWindow", "Root of input polinom:", nullptr));
        lbl_result->setText(QString());
        label_file->setText(QApplication::translate("MainWindow", "File name:", nullptr));
        lbl_iterationinfo->setText(QApplication::translate("MainWindow", "Iteration done:", nullptr));
        lbl_addinfo->setText(QApplication::translate("MainWindow", "Adding number:", nullptr));
        lbl_multinfo->setText(QApplication::translate("MainWindow", "Multiplication number:", nullptr));
        lbl_iterationnumber->setText(QString());
        lbl_addnumber->setText(QString());
        lbl_multiplicationnumber->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
