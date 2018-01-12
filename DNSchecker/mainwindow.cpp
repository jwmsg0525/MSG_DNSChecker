#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusBar->showMessage("Ready.");
    send_thread = new SendDNS(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Btn_start_clicked()
{   ui->statusBar->showMessage("ui Down....");
    ui->E_domain->setEnabled(false);
    ui->E_dns1->setEnabled(false);
    ui->E_dns2->setEnabled(false);
    ui->LOG_Location->setEnabled(false);
    ui->Btn_start->setEnabled(false);
    ui->Btn_stop->setEnabled(true);
    ui->E_timesec->setEnabled(false);
    ui->statusBar->showMessage("Setting....");
    string E_domain = ui->E_domain->text().toUtf8().data();
    string E_dns1 = ui->E_dns1->text().toUtf8().data();
    string E_dns2 = ui->E_dns2->text().toUtf8().data();
    string LOG_Location = ui->LOG_Location->text().toUtf8().data();
    string E_timesec = ui->E_timesec->text().toUtf8().data();

    int timesec = 60 * 10;
    if(!(strcmp(E_domain.c_str(),"")||strcmp(E_dns1.c_str(),"")||strcmp(E_dns2.c_str(),"")||strcmp(LOG_Location.c_str(),"")))
    {
        this->on_Btn_stop_clicked();
        ui->statusBar->showMessage("Error<There is not enough argument value.> ");
        return;
    }
    if(strcmp(E_timesec.c_str(),"")){
        timesec = stoi(E_timesec);
    }
    ui->E_timesec->setText(QString::fromStdString(to_string(timesec)));

    send_thread->Setting(E_domain,E_dns1,E_dns2,LOG_Location,timesec);
    send_thread->threadrun = true;
    send_thread->start();

    ui->statusBar->showMessage("Running Now.");
}

void MainWindow::on_Btn_stop_clicked()
{
    ui->statusBar->showMessage("Stopping....");
    send_thread->threadrun = false;
    send_thread->quit();

     ui->statusBar->showMessage("ui up....");
        ui->E_domain->setEnabled(true);
        ui->E_dns1->setEnabled(true);
        ui->E_dns2->setEnabled(true);
        ui->LOG_Location->setEnabled(true);
        ui->Btn_start->setEnabled(true);
        ui->Btn_stop->setEnabled(false);
        ui->E_timesec->setEnabled(true);
    ui->statusBar->showMessage("Ready.");

}
