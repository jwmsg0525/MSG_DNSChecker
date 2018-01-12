#include "logging.h"
#include <time.h>
#include <stdio.h>
#include <string>
logging::logging(string filepath)
{
this->filepath = filepath;
}

string nowtime(){
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y/%m/%d/%H:%M:%S", &tstruct);
    string time = buf;
    return time;
}
void logging::insertlog(string domain, string ip,string dnsserver){
 string data = domain + " - " + ip +" - " +dnsserver+" - "+ nowtime()+"\n";
 FILE * fp;
 fp = fopen(filepath.c_str(),"a");
 fprintf(fp,data.c_str());
 fclose(fp);
}
