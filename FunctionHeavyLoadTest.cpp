//
// Created by 焦文启 on 2023/4/19.
//函数的重载
/**
 * 重载 函数名相同，提高复用性
 * 条件：
 * 1.同一作用域下
 * 2.函数名相同
 * 3.函数参数类型不同，或者个数不同，或者顺序不同
 * 注意：函数的返回值不能作为函数重载的条件
 * 注意事项：
 * 引用作为重载条件
 * 函数重载碰到函数默认参数
 */
#include "FunctionHeavyLoadTest.h"
#include "iostream"
using namespace std;

void funcOne(){
    cout << "test" << endl;
}

void funcOne(int a){
    cout << "test a" << endl;
}
//引用作为重载条件
void funcTwo(int &a){//int &a = 10 不合法
    cout << "&a" << endl;
}

void funcTwo(const int &a){//const int &a = 10合法的  //加上const后，编译器将代码修改int temp = 10; const int & a = temp;
    cout << "const &a" << endl;
}

void funcThree(int a){
    cout << a << endl;
}
void funcThree(int a,int b = 10 ){
    cout << a << endl;
    cout << b << endl;
}

int mainFHeavy(){


    funcOne();
    int a = 10;
    funcTwo(a);//a走上面，直接传10走下面
    //funcThree(a);//当函数重载遇到默认参数，出现二义性，报错，尽量避免这种情况
    return 0;
}
