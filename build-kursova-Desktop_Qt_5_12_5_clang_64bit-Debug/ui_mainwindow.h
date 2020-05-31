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
#include "QtCharts"

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
    QLineEdit *lineEdit_e;
    QPushButton *btn_calculate;
    QLabel *lbl_power;
    QLineEdit *le_power;
    QLabel *lbl_inputequations;
    QPushButton *b_choose_file;
    QLabel *lbl_inforesult;
    QLabel *lbl_result;
    QLabel *label_file;
    QLineEdit *le_filename;
    QLabel *lbl_iterationinfo;
    QPushButton *btn_save;
    QLabel *lbl_output_file;
    QLineEdit *le_filename_tosave;
    QChartView *graphik;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *le_minx;
    QLabel *label_2;
    QLineEdit *le_maxx;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 600);
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
        input_keyboard->setChecked(true);

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
        horizontalLayoutWidget_2->setGeometry(QRect(10, 280, 551, 80));
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
        b_bisection->setChecked(true);

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
        le_euations->setGeometry(QRect(140, 180, 391, 40));
        le_euations->setFont(font);
        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 370, 160, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(24);
        label->setFont(font1);

        horizontalLayout_3->addWidget(label);

        lineEdit_e = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_e->setObjectName(QString::fromUtf8("lineEdit_e"));
        lineEdit_e->setFont(font);

        horizontalLayout_3->addWidget(lineEdit_e);

        btn_calculate = new QPushButton(centralwidget);
        btn_calculate->setObjectName(QString::fromUtf8("btn_calculate"));
        btn_calculate->setGeometry(QRect(350, 360, 181, 101));
        btn_calculate->setFont(font);
        lbl_power = new QLabel(centralwidget);
        lbl_power->setObjectName(QString::fromUtf8("lbl_power"));
        lbl_power->setGeometry(QRect(10, 140, 141, 16));
        lbl_power->setFont(font);
        le_power = new QLineEdit(centralwidget);
        le_power->setObjectName(QString::fromUtf8("le_power"));
        le_power->setGeometry(QRect(150, 130, 121, 40));
        le_power->setFont(font);
        lbl_inputequations = new QLabel(centralwidget);
        lbl_inputequations->setObjectName(QString::fromUtf8("lbl_inputequations"));
        lbl_inputequations->setGeometry(QRect(20, 190, 111, 16));
        lbl_inputequations->setFont(font);
        b_choose_file = new QPushButton(centralwidget);
        b_choose_file->setObjectName(QString::fromUtf8("b_choose_file"));
        b_choose_file->setGeometry(QRect(420, 230, 121, 41));
        lbl_inforesult = new QLabel(centralwidget);
        lbl_inforesult->setObjectName(QString::fromUtf8("lbl_inforesult"));
        lbl_inforesult->setGeometry(QRect(10, 470, 151, 16));
        lbl_inforesult->setFont(font);
        lbl_result = new QLabel(centralwidget);
        lbl_result->setObjectName(QString::fromUtf8("lbl_result"));
        lbl_result->setGeometry(QRect(170, 470, 361, 16));
        lbl_result->setFont(font);
        label_file = new QLabel(centralwidget);
        label_file->setObjectName(QString::fromUtf8("label_file"));
        label_file->setGeometry(QRect(20, 240, 71, 16));
        label_file->setFont(font);
        le_filename = new QLineEdit(centralwidget);
        le_filename->setObjectName(QString::fromUtf8("le_filename"));
        le_filename->setGeometry(QRect(90, 230, 331, 40));
        le_filename->setFont(font);
        lbl_iterationinfo = new QLabel(centralwidget);
        lbl_iterationinfo->setObjectName(QString::fromUtf8("lbl_iterationinfo"));
        lbl_iterationinfo->setGeometry(QRect(580, 510, 155, 20));
        lbl_iterationinfo->setFont(font);
        btn_save = new QPushButton(centralwidget);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        btn_save->setGeometry(QRect(380, 500, 113, 41));
        btn_save->setFont(font);
        lbl_output_file = new QLabel(centralwidget);
        lbl_output_file->setObjectName(QString::fromUtf8("lbl_output_file"));
        lbl_output_file->setGeometry(QRect(10, 510, 121, 16));
        lbl_output_file->setFont(font);
        le_filename_tosave = new QLineEdit(centralwidget);
        le_filename_tosave->setObjectName(QString::fromUtf8("le_filename_tosave"));
        le_filename_tosave->setGeometry(QRect(130, 500, 241, 40));
        le_filename_tosave->setFont(font);
        graphik = new QChartView(centralwidget);
        graphik->setObjectName(QString::fromUtf8("graphik"));
        graphik->setGeometry(QRect(580, -9, 591, 491));
        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(180, 370, 160, 80));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        le_minx = new QLineEdit(horizontalLayoutWidget_4);
        le_minx->setObjectName(QString::fromUtf8("le_minx"));
        le_minx->setEnabled(true);
        le_minx->setFont(font);

        horizontalLayout_4->addWidget(le_minx);

        label_2 = new QLabel(horizontalLayoutWidget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout_4->addWidget(label_2);

        le_maxx = new QLineEdit(horizontalLayoutWidget_4);
        le_maxx->setObjectName(QString::fromUtf8("le_maxx"));
        le_maxx->setFont(font);

        horizontalLayout_4->addWidget(le_maxx);

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
        lineEdit_e->setText(QApplication::translate("MainWindow", "0.001", nullptr));
        btn_calculate->setText(QApplication::translate("MainWindow", "Calculate", nullptr));
        lbl_power->setText(QApplication::translate("MainWindow", "Power of equations:", nullptr));
        le_power->setText(QString());
        lbl_inputequations->setText(QApplication::translate("MainWindow", "Input equations:", nullptr));
        b_choose_file->setText(QApplication::translate("MainWindow", "Check file", nullptr));
        lbl_inforesult->setText(QApplication::translate("MainWindow", "Root of input polinom:", nullptr));
        lbl_result->setText(QString());
        label_file->setText(QApplication::translate("MainWindow", "File name:", nullptr));
        le_filename->setText(QApplication::translate("MainWindow", "/Users/vova/Desktop/input.txt", nullptr));
        lbl_iterationinfo->setText(QApplication::translate("MainWindow", "Iteration done:", nullptr));
        btn_save->setText(QApplication::translate("MainWindow", "Save result", nullptr));
        lbl_output_file->setText(QApplication::translate("MainWindow", "Enter file to save:", nullptr));
        le_filename_tosave->setText(QApplication::translate("MainWindow", "/Users/vova/Desktop/output.txt", nullptr));
        le_minx->setText(QApplication::translate("MainWindow", "-10", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\342\211\244\321\205\342\211\244", nullptr));
        le_maxx->setText(QApplication::translate("MainWindow", "10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
