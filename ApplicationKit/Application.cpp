//
// Created by Andy McCall on 05/04/2018.
//
#include <iostream>

#include "Application.h"

IApplication::IApplication(const char *signature) {
    setSignature(signature);
}

void IApplication::Run() {
    std::cout << "Running IApplication" << std::endl;
}

void IApplication::setSignature(const char *signature) {
    this->signature = signature;
}

const char* IApplication::getSignature() {
    return this->signature;
}

IApplication::~IApplication() {

}