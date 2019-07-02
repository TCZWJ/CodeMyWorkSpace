#include "MyHello.h"
#include "servant/Application.h"
#include "iostream"
#include <vector>
#include <map>
#include <fstream>
#include "tup/tup.h"

using namespace std;
using namespace MyTestApp;

string str2hex(const string& sBuffer)
{
    string str = "";
    for (size_t i = 0; i < sBuffer.length(); ++i) {
        char sb[4] = {0};
        snprintf(sb, 4, "%02x", (unsigned char)sBuffer[i]);
        if (i%10==0)str.append("\n");
        str.append("(byte)0x");
        str.append(sb);
        str.append(",");
    }
    return str;
}


//////////////////////////////////////////////////////
void MyHelloImp::initialize()
{
    //initialize servant here:
    //...
}
                                                                                                                                    1,1           Top
//////////////////////////////////////////////////////
void MyHelloImp::destroy()
{
    //destroy servant here:
    //...
}

int MyHelloImp::mytest(const std::string & sReq_,std::string &sRsp_,CurrentPtr current)
{
  TLOGDEBUG("MyHelloimp::MytestHellosReq:"<<sReq_<<endl);
  sRsp_ = sReq_;

  return 0;
}
