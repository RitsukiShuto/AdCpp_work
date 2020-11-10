// Crteated by RitsukiShuto on 2020/11/10.
// 四則演算を行うクラス定義ファイル --Calc.h
//
#include<iostream>

class Calc01{
    private:
        int a, b;

    public:
        void set(int x, int y);
        int add(void);
        int sub(void);
        int mul(void);
        int div(void);
};
