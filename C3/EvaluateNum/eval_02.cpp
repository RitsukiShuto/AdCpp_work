// Created by RitsukiShuto on 2020/11/05.
// 整数の大小関係を評価 --eval_02.cpp
//
#include<iostream>

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