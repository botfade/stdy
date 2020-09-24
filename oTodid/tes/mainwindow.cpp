#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "wayae.cpp"
#include <QTimer>
#include <QTime>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow),
      time(new QTime(0,0)),
      timer(new QTimer())
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    timer->start(10);
    connect(timer,&QTimer::timeout,[this](){
        *time=time->addMSecs(10);
        ui->label->setText(time->toString("mm:ss:zzz"));
    });
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText("ASTAGHFIRULLAHHH");
}
