//
// Created by 焦文启 on 2023/4/9.
//三目运算符
#include "iostream"
using namespace std;
int main1(){
    int a = 10;
    int b = 20;
    int c = 0;
    c = a > b ? a : b;
    cout << c << endl;
    //在C++中三目运算符返回的是变量，可以继续赋值
    (a < b ? a : b) = 100;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}

