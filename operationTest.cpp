//
// Created by 焦文启 on 2023/4/6.
//运算符学习
#include "iostream"
using namespace std;
int main(){
    //加减乘除运算
    int i = 12;
    int j = 10;
    cout << i + j << endl;
    cout << i - j << endl;
    cout << i * j << endl;
    cout << i / j << endl;//两个整数相除结果依然是整数，将小数去除
    int x = 10;
    int y = 20;
    cout << x / y << endl;//两个整数相除结果依然是整数，将小数去除

    int q = 10;
    int w = 0;
    cout << q / w << endl;//

    double d1 = 4.5;
    double d2 = 2.2;
    cout<< d1 / d2 << endl;//两个小数相除结果依然是小数

    //取模 取余运算 小数之间不能取模运算
    int m = 10;
    int n = 3;
    cout << m%n << endl;
    int m1 = 10;
    int n1 = 20;
    cout << m1%n1 << endl;
    cout<< q%w << endl;
    //cout << d1 % d2 << endl;

    //递增++ 递减--
    //前置递增
    int aa = 1;
    ++aa;
    cout << aa << endl;
    --aa ;
    cout << aa << endl;
    //后置递增
    int bb = 1;
    bb++;
    cout << bb << endl;
    bb--;
    cout<< bb << endl;
    //前置递增与后置递增的区别
    //前置递增先让变量加1，然后进行表达式运算 先加后用
    int s = 10;
    int ss = ++s * 10;
    cout << ss << endl;
    //后置递增先进行表达式运算，然后加1 先用后加
    int c = 10;
    int cc = c++ * 10;
    cout << c << endl;
    cout << cc << endl;

    return 0;
}

