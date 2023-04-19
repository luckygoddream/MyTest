//
// Created by 焦文启 on 2023/4/19.
//在c++中，函数的形参列表中的形参是可以有默认值的

#include "FunctionParamTest.h"
#include "iostream"
using namespace std;
//如果传值就用自己的，如果没有，用默认值
//语法：返回值类型 函数名 （形参 = 默认值）{};
/**
 * 注意事项：如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
 * 如果函数声明有默认参数，函数实现就不能有默认参数
 */
int funcSum(int a,int b = 20,int c = 30){
    return a + b +c;
}

//声明和实现只能一个有默认值
int func2(int a = 10,int b = 10);//函数声明
//实现
//int func2(int a =10,int b = 10){//错误的
//    return a + b;
//}
//函数实现
int func2(int a ,int b ){//正确的
    return a + b;
}

int mainFParam(){
    int a = 10;
    int b = 20;
    int c = 30;
    int s = funcSum(10,30);
    cout << s << endl;

    return 0;
}
