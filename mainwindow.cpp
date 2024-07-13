#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

double firstNum = 0, secondNum = 0, result = 0;

// the add funciotn of the button
void MainWindow::on_buttonAdd_clicked()
{
    firstNum = ui->lineFirstNum->text().toDouble();
    secondNum = ui->lineSecondNum->text().toDouble();
    result = firstNum + secondNum;
    ui->lineResult->setText(QString::number(result));
}

// the sub funciotn of the button
void MainWindow::on_buttonSubtract_clicked()
{
    firstNum = ui->lineFirstNum->text().toDouble();
    secondNum = ui->lineSecondNum->text().toDouble();
    result = firstNum - secondNum;
    ui->lineResult->setText(QString::number(result));
}


// div function

void MainWindow::on_buttonDevide_clicked()
{
    firstNum = ui->lineFirstNum->text().toDouble();
    secondNum = ui->lineSecondNum->text().toDouble();
    result = firstNum / secondNum;
    ui->lineResult->setText(QString::number(result));
}


// the mul funciotn of the button
void MainWindow::on_buttonMultiply_clicked()
{
    firstNum = ui->lineFirstNum->text().toDouble();
    secondNum = ui->lineSecondNum->text().toDouble();
    result = firstNum * secondNum;
    ui->lineResult->setText(QString::number(result));
}


