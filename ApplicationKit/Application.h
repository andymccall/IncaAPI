#ifndef INCAAPI_APPLICATION_H
#define INCAAPI_APPLICATION_H

class IApplication {
public:

    IApplication(const char *signature);

    virtual ~IApplication();

    void Run();

    const char *getSignature();

private:

    const char *signature;

    void setSignature(const char *signature);


};

// Global Objects

extern IApplication *i_app;

#endif //INCAAPI_IAPPLICATION_H
