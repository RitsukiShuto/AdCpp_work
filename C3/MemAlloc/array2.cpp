// Created by RitsukiShuto on 2020/11/04.
// 2次元配列の要素数を動的に確保 --ArrayAlloc.cpp
//
#include<iostream>

int main(int argc, char *argv[]){
    // 変数を宣言
    int row = 0, col = 0;

    // 要素数を入力
    std::cerr << "Input (Row, Col) number: ";
    std::cin >> row;
    std::cin >> col;

    // メモリ領域を確保
    int **a;
    a = new int*[row];

    for(int i = 0;i < row;i++){
        a[i] = new int[col];
    }

    // データを入力
    std::cerr << "-----------------\n";
    for(int i = 0;i < row;i++){
        std::cerr << "input " << col << " data: ";
        for(int j = 0;j < col;j++){
            std::cin >>a[i][j];
        }
    }

    // データを出力
    std::cerr << "-----------------\n";
    for(int i = 0;i < row;i++){
        std::cout << "(";
        for(int j = 0;j < col;j++){
            std::cout << a[i][j] << ", ";
        }
        std::cout << ")\n";
    }

    // 配列のデータを削除
    for(int i = 0;i < row;i++){
        delete[] a[i];
    }delete[] a;

    return 0;
}