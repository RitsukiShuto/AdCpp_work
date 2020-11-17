// Created by RitsukiShuto on 2020/11/17.
// main.cpp
//
#include"SuperSojo.h"

int main(int argc, char *argv[]){
    SuperSojo ss1;
    SuperSojo ss2("Kumamoto");
    SuperSojo *ss3 = new SuperSojo("Japan");

    ss1.print();
    ss2.print();
    ss3 -> print();

    delete ss3;

    return 0;
}