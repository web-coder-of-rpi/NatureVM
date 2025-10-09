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
    void on_openProjectButton_clicked();
    void on_actionFull_Screen_triggered();
    void on_actionClose_triggered();
    void on_actionSource_Code_triggered();
private:
    Ui::HomeWindow *ui;
};
#endif // HOMEWINDOW_H
