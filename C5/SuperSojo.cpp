// Created by RitsukiShuto on 2020/11/17.
// SuperSojo.cpp
//
#include "SuperSojo.h"

// デフォルトコンストラクタ
SuperSojo::SuperSojo(void)
{ std::cout << " + SuperSojo !" << "\n"; }

// 引数つきコンストラクタ
SuperSojo::SuperSojo(std::string s)
{ std::cout << " + Super " << s << " !\n"; }

// デクストラ
SuperSojo::~SuperSojo(void)
{ std::cerr << " + Super Bye.\n"; }

// メンバ関数
void SuperSojo::print(void)
{ std::cout << "SuperSojo::print\n"; }
