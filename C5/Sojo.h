// Created by RitsukiShuto on 2020/11/10.
// Sojo.h
//
#include<iostream>

class Sojo{
    public:
        Sojo(void);             // 標準
        Sojo(std::string s);    // 文字列の引数を取得するコンストラクタ
        ~Sojo(void);            // デクストラ
        void print(void);       // メンバ関数
};