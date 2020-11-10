// Created by RitsukiShuto on 2020/11/10.
// 四則演算を行う --Calc01.cpp
//
#include"Calc01.h"

void Calc01::set(int x, int y){
    this -> a = x;
    this -> b = y;
}
int Calc01::add(void) { return this -> a + this -> b;}
int Calc01::sub(void) { return this -> a - this -> b;}
int Calc01::mul(void) { return this -> a * this -> b;}
int Calc01::div(void) {
    if(this -> b == 0){
        std::cerr << "0 division.\n";
        return 0;
    }
    return this -> a / this -> b;
}
