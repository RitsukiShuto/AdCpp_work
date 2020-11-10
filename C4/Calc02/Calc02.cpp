// Created by RitsukiShuto on 2020/11/10.
// 四則演算を行う --Calc02.cpp
//
#include"Calc02.h"

void Calc02::set(int x, int y){
    this -> a = x;
    this -> b = y;
}
int Calc02::add(void) { return this -> a + this -> b;}
int Calc02::sub(void) { return this -> a - this -> b;}
int Calc02::mul(void) { return this -> a * this -> b;}
int Calc02::div(void) {
    if(this -> b == 0){
        std::cerr << "0 division.\n";
        return 0;
    }
    return this -> a / this -> b;
}
double Calc02::realdiv(void) {
    if(this -> b == 0){
        std::cerr << "0 division.\n";
        return 0.0;
    }
    return (double)this -> a / (double)this -> b;
}