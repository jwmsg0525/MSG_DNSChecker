#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <qthread.h>
#include <tins/tins.h>
#ifndef SENDDNS_H
#define SENDDNS_H
using namespace std;

class SendDNS : public QThread
{
     Q_OBJECT
public:
    string domain;
    string dns1;
    string dns2;
    string log_locate;
    bool threadrun = false;
    int sec;
    SendDNS(QObject *parent = 0);
    void Setting(string domain, string dns1, string dns2, string log_locate,int sec);

private:
    void run();

public slots:

};

#endif // SENDDNS_H
