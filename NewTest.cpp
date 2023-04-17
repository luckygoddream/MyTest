//
// Created by 焦文启 on 2023/4/17.
//new操作符

#include "NewTest.h"
#include "iostream"
using namespace std;
//new的基本语法
int * func1(){
    //利用new创建的数据，会返回该数据对应的类型的指针
  int * i =  new int(10);
    return i;
}
//利用new在堆区开辟数组
void test2(){
    //创建10个整形数组，在堆区
   int * a =  new int[10];//开辟10个元素的数组
    for (int i = 0; i < 10; i++) {
        a[i] = i + 100;
    }

    for (int i = 0; i < 10; i++) {
        cout << a[i] << endl;
    }
    //释放堆区数组,释放数组得加【】中括号
    delete[]a;


}


int mainNew(){
    //堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符delete
    int *i = func1();
    cout << *i << endl;
    delete i;
    cout << *i << endl;
    test2();

    return 0;
}
