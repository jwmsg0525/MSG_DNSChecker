#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <tins/tins.h>
#include <thread>
#include <logging.h>

#ifndef RECIVEDNS_H
#define RECIVEDNS_H
using namespace std;
using namespace Tins;

class ReciveDNS
{

public:
   ReciveDNS(string log_locate);
   void recive();
   bool callback(const PDU& pdu);
   string domain;
   string dns1;
   string log_locate;
   string serverip;
   string DNSserver;



};

#endif // RECIVEDNS_H
