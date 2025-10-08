#ifndef HOMEWINDOW_H
#define HOMEWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class HomeWindow; }
QT_END_NAMESPACE

class HomeWindow : public QMainWindow
{
    Q_OBJECT

public:
    HomeWindow(QWidget *parent = nullptr);
    ~HomeWindow();

private slots:
    void on_newProjectButton_clicked();
    void on_openProjectButton_clicked();

private:
    Ui::HomeWindow *ui;
};
#endif // HOMEWINDOW_H
