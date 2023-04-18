//
// Created by 焦文启 on 2023/4/17.
//引用的基本使用

#include "ReferenceTest.h"
#include "iostream"
using namespace std;
//交换
//值传递
void mySwap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    cout << a << endl;
    cout << b << endl;
}
//地址传递
void mySwap2(int *a,int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//引用传递
void mySwap3(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    //引用的作用：给变量起别名
    //语法：数据类型 &别名 = 原名
    //使用注意事项：引用必须初始化（必须赋值）很向指针常量，引用不能变，指针的值可以变
    //引用在初始化后，不可以改变
    int a = 10;
    //int &c;//错误的，必须初始化
    int c = 20;
    int &b = a;//一旦初始化完成，引用不能改
    b = 20;
    b = c;//赋值操作，不是更改引用等于 b=20的操作
    cout << a << endl;

    int d = 10;
    int f = 20;
    //mySwap(d,f);//值传递，形参不会修饰实参
   // mySwap2(&d,&f);//地址传递，形参会修饰实参
    mySwap3(d,f);//引用传递，形参会修饰实参
    cout << d << endl;
    cout << f << endl;



    return 0;
}