#ifndef _MyHelloImp_H_
#define _MyHelloImp_H_

#include "servant/Application.h"
#include "MyHelloImpl.h"

/**
 *
 *
 */
class MyHelloImp : public MyTestApp::MyHello
{
public:
    /**
     *
     */
    virtual ~MyHelloImp() {}

    /**
     *
     */
    virtual void initialize();
    /**
     *
     */
    virtual void destroy();

    /**
     *
     */
      virtual int mytest(const std::string & sReq_,std::string &sRsp_,CurrentPtr current);
};
/////////////////////////////////////////////////////
#endif
