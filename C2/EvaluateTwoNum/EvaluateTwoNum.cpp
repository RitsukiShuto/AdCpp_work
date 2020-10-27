// Created by RitsukiShuto on 2020/10/27.
// EvaluateTwoNum.cpp
//
#include<iostream>

int main(int argc, char *argv[]){
    int num1, num2;

    std::cout << "Input the 1st num: ";
    std::cin >> num1;

    std::cout << "Input the 2nd num: ";
    std::cin >> num2;

    if(num1 == num2){
        std::cout << num1 << " = " << num2 << std::endl;
    }else if(num1 > num2){
        std::cout << num1 << " > " << num2 << std::endl;
    }else{
        std::cout << num1 << " < " << num2 << std::endl;
    }

    return 0;
}