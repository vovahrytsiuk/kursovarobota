#include "mainwindow.h"
#include "polinom.h"
#include "solution.h"

#include <QApplication>
#include <ctime>
QT_CHARTS_USE_NAMESPACE




string generate_equations(int power);

int main(int argc, char *argv[])
{
    srand(time(NULL));
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //Polinom p(4, "3x^3  + 2*x -1 = 0");

    return a.exec();
}
