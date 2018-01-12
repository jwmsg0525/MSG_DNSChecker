#include "recivedns.h"
using namespace std;
using namespace Tins;
ReciveDNS::ReciveDNS(string log_locate)
{
    this->log_locate = log_locate;
}
bool ReciveDNS::callback(const PDU& pdu) {
    IP ip = pdu.rfind_pdu<RawPDU>().to<IP>();
    DNS dns = ip.rfind_pdu<RawPDU>().to<DNS>();
    for (const auto& ans : dns.answers()) {
       this->domain = ans.dname();
       this->serverip = ans.data();
       this->DNSserver = ip.src_addr().to_string();
       cout << ans.data()<<"/"<<domain<< endl;

    }
    return false;
}



void ReciveDNS::recive(){
    NetworkInterface interface = NetworkInterface::default_interface();
    SnifferConfiguration config;
    config.set_promisc_mode(true);
    config.set_filter("udp and dst port 1337");
    Sniffer snf(interface.name());
    snf.sniff_loop(
            bind(
                &ReciveDNS::callback,
                this,
                std::placeholders::_1
            )
        );
    logging log = logging(log_locate);
    log.insertlog(domain,serverip,DNSserver);
}
