// Created by RitsukiShuto on 2020/10/27.
// Calc4.cpp
//
#include<iostream>

int main(int argc, char *argv[]){
    int num1, num2;

    // 整数を入力
    std::cout << "Input the 1st number: ";
    std::cin >> num1;

    std::cout << "Input the 2nd number: ";
    std::cin >> num2;

    // 計算結果を表示
    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
    std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;

    return 0;
}
