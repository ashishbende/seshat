#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label_2->setText("Current Note Style : Mind Maps");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label_2->setText("Current Note Style : Mark Down");

}

void MainWindow::on_pushButton_3_clicked()
{
    ui->label_2->setText("Current Note Style : Rich Text");

}

void MainWindow::on_actionAbout_triggered()
{
    QString about_text;
    about_text = "Author : Ashish Bende";
    about_text += "(C) Seshat 2016";
    QMessageBox::about(this,"About Seshat",about_text);
}


