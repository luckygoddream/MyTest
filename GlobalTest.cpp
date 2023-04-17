//
// Created by 焦文启 on 2023/4/17.
//全局区

#include "GlobalTest.h"
#include "iostream"
//全局变量 在全局区中
int g_a = 10;
int g_b = 10;
const int c_g_a = 10;
const int c_g_b = 10;
using namespace std;
int mainGlobal(){
    //全局区
    //全局变量，静态变量，常量
    //局部变量 不在全局区中
    int a = 10;
    int b = 10;
    cout << "局部变量a的地址为：" << &a << endl;
    cout << "局部变量b的地址为：" << &b << endl;
    cout << "全局变量g_a的地址为：" << &g_a << endl;
    cout << "全局变量b的地址为：" << &g_b << endl;

    //静态变量 在全局中
    static int s_a = 10;
    static int s_b = 10;
    cout << "静态变量s_a的地址为：" << &s_a << endl;
    cout << "静态变量s_b的地址为：" << &s_b << endl;

    //常量
    //字符串常量 在全局区中
    cout << "字符串常量的地址为：" << &"hello world" << endl;
    //const修饰的常量
    //const修饰的全局变量 在全局区中
    cout << "全局常量c_g_a的地址为：" << &c_g_a << endl;
    cout << "全局常量c_g_b的地址为：" << &c_g_b << endl;
    //const修饰局部变量 不在全局区中
    const int c_l_a = 10;
    const int c_l_b = 10;
    cout << "局部常量c_l_a的地址为：" << &c_l_a<< endl;
    cout << "局部常量c_l_b的地址为：" << &c_l_b<< endl;
    return 0;
}

