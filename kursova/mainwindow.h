#ifndef MAINWINDOW_H
#define MAINWINDOW_H



#include <QMainWindow>
//#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include "polinom.h"
#include <QTextStream>
#include <QFile>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

using namespace std;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_btn_calculate_clicked();

    void on_input_file_clicked();

    void on_input_keyboard_clicked();

    void on_input_random_clicked();

    void on_b_choose_file_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
