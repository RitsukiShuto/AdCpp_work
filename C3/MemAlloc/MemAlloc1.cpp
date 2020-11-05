// Created by RitsukiShuto on 2020/11/04.
// 配列の要素数を動的に確保 --ArrayAlloc.cpp
//
#include<iostream>

int main(int argc, char *argv[]){
    int n = -1;      // 変数を宣言

    /* 0以上が入力されるまで繰り返し */
    while(n <= 0){
        /* キーボードから整数を入力 */
        std::cerr << "Input positive integer: ";
        std::cin >> n;
    }
    
    /* Memory allocation */
    int *a;
    a = new int[n];

    for(int i = 0;i < n;i++){
        a[i] = i;
    }

    /* Data output */
    std::cout << "(";
    for(int i = 0;i < n;i++){
        std::cout << a[i] << ", ";
    }
    std::cout << ")";

    /* Memory release */
    delete[] a;

    return 0;
}