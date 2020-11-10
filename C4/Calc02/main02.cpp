// Created by RitsukiShuto on 2020/11/10.
// 四則演算を行う --main02.cpp
//
#include"Calc02.h"

int main(int argc, char *argv[]){
    int a = 0, b = 0;

    std::cout << "Input 2 numbers: ";
    std::cin >> a;
    std::cin >> b;

    Calc02 c;
    c.set(a, b);

    std::cout << a << " + " << b << " = " << c.add() << "\n";
    std::cout << a << " - " << b << " = " << c.sub() << "\n";
    std::cout << a << " * " << b << " = " << c.mul() << "\n";
    std::cout << a << " / " << b << " = " << c.div() << "\n";
    std::cout << a << " / " << b << " = " << c.realdiv() << "\n";

    return 0;
}