#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "clyde.h"
#include "personnage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _pacMan = new Personnage(1, 1, ui->background);
    _fantome1 = new Clyde(0,0, ui->background);
    _pastille = new Pastille(1, 2, ui->background);
}

MainWindow::~MainWindow()
{
    delete ui;
}
