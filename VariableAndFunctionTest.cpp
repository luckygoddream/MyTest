//
// Created by 焦文启 on 2023/4/26.
//成员变量和成员函数分开存储
#include "iostream"
using namespace std;
//在c++中，类内的成员变量和成员函数分来存储
//只有非静态成员变量才属于类的对象上
class Person{
    int a;//分静态成员变量，属于类的数据

    static int b;//不属于类的数据

    void func(){//非静态成员函数，不属于类对象上

    }

    static void func2(){//不属于类的对象

    }

};
int Person::b = 50;
void test01(){
    Person p;
    //空对象占用的空间为 1
    //C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
    //每个空对象都有一个独一无二的内存地址
    cout << sizeof(p) <<endl;
}
void test02(){
    Person p;
    cout << sizeof(p) <<endl;
}

int mainVA(){

    //test01();
    test02();
    return 0;
}

