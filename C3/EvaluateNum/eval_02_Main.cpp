// Created By RitsukiShuto on 2020/11/05.
// 2つの整数の大小関係を評価 --eval_02_Main.cpp
//
#include<iostream>
#include"./eval_02.h"

// main関数
int main(int argc, char *argv[]){
    // 変数を宣言
    int a = 0, b = 0;

    std::cerr << "Input 2 numbers: ";
    std::cin >> a;
    std::cin >> b;

    eval(a, b);     // 関数の呼び出し

    return 0;
}
