//
// Created by 焦文启 on 2023/4/12.
//指针学习
#include "iostream"
using namespace std;
int main(){
    //可以通过指针间接访问内存
    //可以通过指针来保存一个内存地址
    //定义指针
    int a = 10;
    //定义指针的语法：数据类型 * 指针变量名；
    int * p;
    //让指针记录变量a的地址
    p = &a;
    cout << &a << endl;
    cout << p << endl;
    //使用指针
    //可以通过解引用的方式来找到指针指向的内存
    //指针前加* 代表解引用，找到指针指向的内存中的数据
    *p = 1000;
    cout << a << endl;
    cout << *p << endl;

    return 0;
}

