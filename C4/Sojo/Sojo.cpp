// Created by RitsukiShuto on 2020/11/10.
// sojo.cpp
//
#include "Sojo.h"

// デフォルトコンストラクタ
Sojo::Sojo(void)
{ std::cout << "Sojo !" << "\n"; }

// 引数つきコンストラクタ
Sojo::Sojo(std::string s)
{ std::cout << s << " !\n"; }

// デクストラ
Sojo::~Sojo(void)
{ std::cerr << "Bye.\n"; }

// メンバ関数
void Sojo::print(void)
{ std::cout << "Sojo::print\n"; }
