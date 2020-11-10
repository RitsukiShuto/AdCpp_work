// Crteated by RitsukiShuto on 2020/11/10.
// 四則演算を行うクラス定義ファイル --Calc03.h
//
#include<iostream>

class Calc03{
    private:
        int a, b;

    public:
        Calc03(void);
        ~Calc03(void);
        void set(int x, int y);
        int add(void);
        int sub(void);
        int mul(void);
        int div(void);
        double realdiv(void);

};
