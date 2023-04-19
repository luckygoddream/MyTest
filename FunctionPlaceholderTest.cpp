//
// Created by 焦文启 on 2023/4/19.
//函数占位符
/**
 * c++函数中形参列表里可以有占位参数，用来占位，访问函数时必须填补该位置
 * 语法：返回值类型 函数名 （数据类型）{} 数据类型表示占位参数
 */
#include "FunctionPlaceholderTest.h"
#include "iostream"
using namespace std;

//占位参数，数据类型表示，目前占位参数用不到，后面会用
//占位参数还可以有默认参数
void fun(int a,int = 10){
    cout << a << endl;
}

int mainFPlace(){

    fun(10,10);
    return 0;
}

