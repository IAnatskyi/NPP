#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{

    // -- calculation Design
    double a = ui->lineEdit->text().toDouble();
    double b = ui->lineEdit_2->text().toDouble();
    double c = ui->lineEdit_5->text().toDouble();
    double d = ui->lineEdit_6->text().toDouble();
    double e = ui->lineEdit_9->text().toDouble();
    double f = ui->lineEdit_10->text().toDouble();
    double g = ui->lineEdit_11->text().toDouble();
    double h = ui->lineEdit_13->text().toDouble();
    double i = ui->lineEdit_15->text().toDouble();
    double j = ui->lineEdit_16->text().toDouble();

    QString s = QString::number(a);
    QString s1 = QString::number(c);
    QString s2 = QString::number(e);


    if((b == 1)){
        ui->lineEdit_4->setText(s);
    }else{
        ui->lineEdit_4->setText(0);
    }if((d == 1)){
        ui->lineEdit_8->setText(s1);
    }else{
        ui->lineEdit_8->setText(0);
    }if((f == 1) || (g == 2)){
        ui->lineEdit_12->setText(s2);
    }else{
        ui->lineEdit_12->setText(0);
    }if((b == 1)){
        j = a+c+e;
        i = j*h;
    }else{
        j = c+e;
        i = j*h;
    }

    QString s3 = QString::number(i);
    QString s4 = QString::number(j);
    ui->lineEdit_16->setText(s4);
    ui->lineEdit_15->setText(s3);

    // -- calculation Equipment Manufacturer
    double a1 = ui->lineEdit_17->text().toDouble();
    double b1 = ui->lineEdit_18->text().toDouble();
    double c1 = ui->lineEdit_21->text().toDouble();
    double d1 = ui->lineEdit_22->text().toDouble();
    double e1 = ui->lineEdit_9->text().toDouble();
    double f1 = ui->lineEdit_10->text().toDouble();
    double g1 = ui->lineEdit_11->text().toDouble();
    double h1 = ui->lineEdit_13->text().toDouble();
    double i1 = ui->lineEdit_15->text().toDouble();
    double j1 = ui->lineEdit_16->text().toDouble();

    QString s_ = QString::number(a1);
    QString s_1 = QString::number(c1);
    QString s_2 = QString::number(e1);

    if((a1 == 1) || (b1 == 2)){
        ui->lineEdit_20->setText(s_);
    }else{
        ui->lineEdit_20->setText(0);
    }
    if((b == 1)){
        ui->lineEdit_4->setText(s);
    }else{
        ui->lineEdit_4->setText(0);
    }if((d == 1)){
        ui->lineEdit_8->setText(s1);
    }else{
        ui->lineEdit_8->setText(0);
   if((b == 1)){
        j = a+c+e;
        i = j*h;
    }else{
        j = c+e;
        i = j*h;
    }

    QString s_3 = QString::number(i1);
    QString s_4 = QString::number(j1);
    ui->lineEdit_16->setText(s_4);
    ui->lineEdit_15->setText(s_3);

    }
}
