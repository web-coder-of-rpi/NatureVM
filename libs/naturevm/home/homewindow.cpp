#include "homewindow.h"
#include "ui/ui_homewindow.h"
#include <iostream>

HomeWindow::HomeWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HomeWindow)
{
    ui->setupUi(this);
}

HomeWindow::~HomeWindow()
{
    delete ui;
}

void HomeWindow::on_newProjectButton_clicked()
{
    std::cout << "New Project\n";
}

void HomeWindow::on_openProjectButton_clicked()
{
    std::cout << "Open project\n";
}