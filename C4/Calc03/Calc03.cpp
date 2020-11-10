// Created by RitsukiShuto on 2020/11/10.
// 四則演算を行う --Calc03.cpp
//
#include"Calc03.h"

Calc03::Calc03(void) { this -> a = 0; this -> b = 1; }
Calc03::~Calc03(void) { std::cerr << "Bye.\n"; }

void Calc03::set(int x, int y){
    this -> a = x;
    this -> b = y;
}
int Calc03::add(void) { return this -> a + this -> b;}
int Calc03::sub(void) { return this -> a - this -> b;}
int Calc03::mul(void) { return this -> a * this -> b;}
int Calc03::div(void) {
    if(this -> b == 0){
        std::cerr << "0 division.\n";
        return 0;
    }
    return this -> a / this -> b;
}
double Calc03::realdiv(void) {
    if(this -> b == 0){
        std::cerr << "0 division.\n";
        return 0.0;
    }
    return (double)this -> a / (double)this -> b;
}