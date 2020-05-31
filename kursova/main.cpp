#include "mainwindow.h"
#include "polinom.h"

#include <QApplication>
QT_CHARTS_USE_NAMESPACE




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //Polinom p(4, "3x^3  + 2*x -1 = 0");

    return a.exec();
}
