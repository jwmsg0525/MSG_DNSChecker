#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <senddns.h>
#include <QString>
#include <QTimer>
#include <QVector>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_Btn_start_clicked();

    void on_Btn_stop_clicked();

private:
    Ui::MainWindow *ui;
    SendDNS* send_thread;
};

#endif // MAINWINDOW_H
