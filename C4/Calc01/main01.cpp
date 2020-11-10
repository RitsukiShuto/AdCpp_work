// Created by RitsukiShuto on 2020/11/10.
// アプリケーションファイル --main01.cpp
//
#include"Calc01.h"

int main(int argc, char *argv[]){
    int a = 0, b = 0;

    std::cout << "Input 2 numbers: ";
    std::cin >> a;
    std::cin >> b;

    Calc01 c;
    c.set(a, b);

    std::cout << a << " + " << b << " = " << c.add() << "\n";
    std::cout << a << " - " << b << " = " << c.sub() << "\n";
    std::cout << a << " * " << b << " = " << c.mul() << "\n";
    std::cout << a << " / " << b << " = " << c.div() << "\n";

    return 0;
}