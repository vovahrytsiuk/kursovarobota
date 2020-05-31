#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lbl_power->hide();
    ui->lbl_inputequations->hide();
    ui->le_power->hide();
    ui->le_euations->hide();
    ui->b_choose_file->hide();
    ui->label_file->hide();
    ui->le_filename->hide();



}

MainWindow::~MainWindow()
{
    delete ui;
}








void MainWindow::on_btn_calculate_clicked()
{

    int power;
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
    }
    float minx, maxx;
    minx = ui->lineEdit_3->text().toFloat();
    maxx = ui->lineEdit_4->text().toFloat();
    double e = ui->lineEdit_2->text().toDouble();
    try{
        Polinom p(power, equations.toStdString());
        Solution b;
        vector<float> roots;
        if(ui->b_bisection->isChecked()){
            roots = b.bisection(p, maxx, minx, e);
        }
        else if(ui->b_newthon->isChecked()){
            roots = b.methodNewton(p, maxx, minx, e);
        }
        else if(ui->b_secant->isChecked()){
            roots = b.secantMethod(p, maxx, minx, e);
        }


        ui->lbl_result->setText(QString::fromStdString(res_to_string(roots)));
    }
    catch(exception&exc){
        ui->lbl_result->setText(exc.what());
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
}
