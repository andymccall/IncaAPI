//
// Created by Andy McCall on 05/04/2018.
//

#include <iostream>
#include "AngryIncaApplication.h"

const char* kSignature = "application/x-vnd.AngryInca-Application";

AngryIncaApplication::AngryIncaApplication() : IApplication(kSignature) {
}

void AngryIncaApplication::AboutRequested() {
    std::cout << "...by Andrew Edward McCall - Big Deal!" << std::endl;
}