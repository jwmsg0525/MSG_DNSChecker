#include "senddns.h"
#include "recivedns.h"
#include <pthread.h>
#include <thread>

using namespace std;
using namespace Tins;

SendDNS::SendDNS(QObject *parent) : QThread(parent)
{

}

void SendDNS::run(){
while(threadrun){
NetworkInterface interface = NetworkInterface::default_interface();
PacketSender sender;
IP ip1 = IP(dns1);
IP ip2 = IP(dns2);
UDP udp = UDP(53,1337);
DNS dns = DNS();
dns.add_query({domain,DNS::A, DNS::IN});
dns.recursion_desired(1);
udp.inner_pdu(dns);
ip1.inner_pdu(udp);
ip2.inner_pdu(udp);

std::thread thr(&ReciveDNS::recive,ReciveDNS(log_locate));
sender.send(ip1,interface.name());
sender.send(ip2,interface.name());
thr.join();
sleep(sec);
}
}

void SendDNS::Setting(string domain, string dns1, string dns2, string log_locate, int sec){
    this->domain = domain;
    this->dns1 = dns1;
    this->dns2 = dns2;
    this->log_locate = log_locate;
    this->sec = sec;
}
