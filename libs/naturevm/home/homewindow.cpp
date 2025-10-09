#include "homewindow.h"
#include "ui/ui_homewindow.h"
#include <QDesktopServices>
#include <QUrl>

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

void HomeWindow::on_openProjectButton_clicked()
{
    HomeWindow::showNormal();
}

void HomeWindow::on_actionFull_Screen_triggered()
{
    // Toggle full screen mode
    if (isFullScreen()) {
        showNormal();
    } else {
        showFullScreen();
    }
}

void HomeWindow::on_actionClose_triggered()
{
    HomeWindow::close();
}

void HomeWindow::on_actionSource_Code_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/web-coder-of-rpi/NatureVM"));
}
