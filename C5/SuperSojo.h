// Created by RitsukiShuto on 2020/11/17.
// SuperSuperSojo.h
//
#include<iostream>
#include "Sojo.h"

class SuperSojo : public Sojo{
    public:
        SuperSojo(void);             // 標準
        SuperSojo(std::string s);    // 文字列の引数を取得するコンストラクタ
        ~SuperSojo(void);            // デクストラ
        void print(void);            // メンバ関数
};