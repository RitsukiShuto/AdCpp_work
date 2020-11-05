// Created by RitsukiShuto on 2020/11/05.
// 整数の大小関係を評価 --Evaluate.cpp
//
#include<iostream>

// プロトタイプ宣言
void eval(int x, int y);

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

// eval関数
// eval関数は2つの整数の大小関係を比較する関数である．
void eval(int pa, int pb){
    
    if(pa > pb){
        std::cout << pa << " > " << pb << "\n";
    }else if(pa < pb){
        std::cout << pa << " < " << pb << "\n";
    }else{
        std::cout << pa << " = " << pb << "\n";
    }
}