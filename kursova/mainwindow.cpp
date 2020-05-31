#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>





MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lbl_power->show();
    ui->lbl_inputequations->show();
    ui->le_power->show();
    ui->le_euations->show();
    ui->b_choose_file->hide();
    ui->label_file->hide();
    ui->le_filename->hide();
    ui->lbl_output_file->hide();
    ui->le_filename_tosave->hide();
    ui->btn_save->hide();



}

MainWindow::~MainWindow()
{
    delete ui;
}








void MainWindow::on_btn_calculate_clicked()
{
    int iteration_number = 0;//для оцінки швидеодії алгоритму
    int power = 0;
    QString equations;
    if(ui->input_keyboard->isChecked()){
        equations = ui->le_euations->text();
        power = ui->le_power->text().toInt();
    }
    else if(ui->input_file->isChecked()){
        QString path_file = ui->le_filename->text();
        if(!QFile::exists(path_file)){
            QMessageBox::warning(this, "Attention", "Enter correct file");
            return;
        }
        QFile file(path_file);
        file.open(QIODevice::ReadOnly|QIODevice::Text);
        QTextStream fin(&file);
        QString str = fin.readLine();
        power = str.toInt();
        equations = fin.readLine();
    }
    else if(ui->input_random->isChecked()){
        power = ui->le_power->text().toInt();
        equations = QString::fromStdString(generate_equations(power));
        QMessageBox::information(this, "Generated", equations);
    }
    double minx, maxx;
    minx = ui->le_minx->text().toDouble();
    maxx = ui->le_maxx->text().toDouble();
    double e = ui->lineEdit_e->text().toDouble();
    try{
        if(maxx < minx){
            throw runtime_error("Invalid interval");
        }
        Polinom p(power, equations.toStdString());
        Solution b;
        vector<double> roots;
        if(ui->b_bisection->isChecked()){
            roots = b.bisection(p, maxx, minx, e, iteration_number);
        }
        else if(ui->b_newthon->isChecked()){
            roots = b.methodNewton(p, maxx, minx, e, iteration_number);
        }
        else if(ui->b_secant->isChecked()){
            roots = b.secantMethod(p, maxx, minx, e, iteration_number);
        }
        ui->lbl_result->setText(QString::fromStdString(b.res_to_string(roots)));
        ui->lbl_output_file->show();
        ui->le_filename_tosave->show();
        ui->btn_save->show();
        ui->lbl_iterationinfo->show();
        ui->lbl_iterationinfo->setText(QString::fromStdString("Iteration done: " + to_string(iteration_number)));
        create_graphic(p, minx, maxx, 0.01, equations);
    }
    catch(exception&exc){
        ui->lbl_result->setText(exc.what());
        QMessageBox::warning(this, "Error", "Wrong input data! Please set correct input_data");
    }


}

void MainWindow::on_input_file_clicked()
{
    ui->lbl_power->hide();
    ui->lbl_inputequations->hide();
    ui->le_power->hide();
    ui->le_euations->hide();
    ui->b_choose_file->show();
    ui->label_file->show();
    ui->le_filename->show();


}

void MainWindow::on_input_keyboard_clicked()
{

    ui->lbl_power->show();
    ui->lbl_inputequations->show();
    ui->le_power->show();
    ui->le_euations->show();
    ui->b_choose_file->hide();
    ui->label_file->hide();
    ui->le_filename->hide();




}

void MainWindow::on_input_random_clicked()
{

    ui->lbl_power->show() ;
    ui->lbl_inputequations->hide();
    ui->le_power->show();
    ui->le_euations->hide();
    ui->b_choose_file->hide();
    ui->label_file->hide();
    ui->le_filename->hide();


}

void MainWindow::on_b_choose_file_clicked()
{
    QString path = ui->le_filename->text();
    if(!QFile::exists(path)){
        ui->le_filename->setText("");
        QMessageBox::warning(this, "Attention", "Enter correct file");
    }
    else{
        QMessageBox::information(this, "Ok", "Such file exists");
    }
}

void MainWindow::on_btn_save_clicked()
{
    QString path_file = ui->le_filename_tosave->text();
    if(!QFile::exists(path_file)){
        ui->le_filename_tosave->setText("");
        QMessageBox::warning(this, "Attention", "Enter correct file name. Results not saved");
    }
    else{
        QFile file(path_file);
        file.open(QIODevice::WriteOnly | QIODevice::Text);
        QString str = ui->lbl_result->text();
        QTextStream fout(&file);
        fout << str;
        QMessageBox::information(this, "Saved succsed" , "Result saved to output file");
    }
}

void MainWindow::create_graphic(Polinom p, double minx, double maxx, double dx, QString graph_name){
    QChart *chart = new QChart();
    QLineSeries *series = new QLineSeries();
    float x = minx;
    while(x <= maxx){
        series->append(x, p.caclc_function(x));
        x+=dx;
    }
    chart->addSeries(series);
    chart->setTitle(graph_name);
    chart->createDefaultAxes();
    chart->legend()->hide();
    ui->graphik->setChart(chart);
    ui->graphik->setRenderHint(QPainter::Antialiasing);
}


