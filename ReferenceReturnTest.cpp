//
// Created by 焦文启 on 2023/4/18.
//引用作为函数的返回值
//引用的本质在c++内部实现是指针常量

#include "ReferenceReturnTest.h"
#include "iostream"
using namespace std;

//不要返回局部变量的引用
int& test01(){
    int a = 10;//存在栈区
    return a;

}

//函数的调用可以作为左值
int & test02(){
    static int a = 10;
    return a;
}

//发现是引用，转换为int * const ref = &a;
void func(int & ref){
    ref = 100;//ref是引用，转换为*ref = 100;
}


int mainReturn(){

    int &a = test01();
    int &b = test02();
    //cout<< a << endl;

    test02() = 1000;
    cout<< b << endl;

    int i = 10;
    //自动转化为int * const ref = &i;指针常量指针指向不能变，也说明为什么引用不能更改
    int &ref = i;
    ref = 20;//内部发现ref是引用，自动转换为 *ref=20；
    func(i);

    return 0;
}


