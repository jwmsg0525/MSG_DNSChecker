#include <iostream>
#include <stdio.h>
#ifndef LOGGING_H
#define LOGGING_H
using namespace std;

class logging
{
public:
    string filepath;
    logging(string filepath);
    void insertlog(string domain, string ip, string dnsserver);
};

#endif // LOGGING_H
