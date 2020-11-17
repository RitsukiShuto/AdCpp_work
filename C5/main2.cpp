// Created by RiysukiShuto on 2020/11/17.
// Main2.cpp
//
#include "Sojo.h"

int main(int argc, char *argv[]){
    Sojo *s;

    std::cerr << "OK !\n";
    s = new Sojo();

    delete s;

    return 0;
}