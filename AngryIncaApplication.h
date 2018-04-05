//
// Created by Andy McCall on 05/04/2018.
//

#ifndef INCAAPI_ANGRYINCAAPPLICATION_H
#define INCAAPI_ANGRYINCAAPPLICATION_H

#include "ApplicationKit/Application.h"

class AngryIncaApplication : public IApplication{

public:
    AngryIncaApplication();

    void AboutRequested();

private:

};


#endif //INCAAPI_ANGRYINCAAPPLICATION_H
