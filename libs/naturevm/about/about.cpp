#include "about.h"
#include "ui_about.h"
#include "../home/homewindow.h"

About::About(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::about)
{
    ui->setupUi(this);
}

About::~About()
{
    delete ui;
}

void HomeWindow::on_actionAbout_triggered()
{
    if (!about)
    {
        about = new About(this);
    }
    about->show();
}