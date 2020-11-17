// Created by RitsukiShuto on 2020/11/10.
// main.cpp
//
#include"Sojo.h"

int main(int argc, char *argv[]){
    Sojo s1;
    Sojo s2("Kumamoto");
    Sojo *s3 = new Sojo("Japan");

    s1.print();
    s2.print();
    s3->print();

    delete s3;

    return 0;
}