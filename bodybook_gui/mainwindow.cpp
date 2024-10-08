#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("Medial");
    ui->pushButton_2->setText("Dorsal");
    ui->pushButton_3->setText("Lateral");
    ui->pushButton_4->setText("Ventral");
}

MainWindow::~MainWindow()
{
    delete ui;
}
