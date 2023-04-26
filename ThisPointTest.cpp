//
// Created by 焦文启 on 2023/4/26.
//this指针
/**
 * this指针指向被调用的成员函数所属的对象
 * this指针是隐含每一个非静态成员函数内的一种指针
 * this指针不需要定义，直接使用就行
 * 用途：
 * 当形参和成员变量同名时，可以用this指针来区分
 * 在类的非静态成员函数中返回对象本身，可以return *this
 */
#include "iostream"
using namespace std;

class Person{
public:
    Person(int age){
        //this指针指向被调用的成员函数所属的对象
        this->age = age;
    }
    Person & addAge(Person &p){//引用返回同一个对象，返回值的话相当创建新的对象
        this->age += p.age;
        //this指向的是指针，而*this指向的就是这个对象本体
        return *this;
    }
    int age;

};
void test01(){
    Person p(18);
    cout << p.age << endl;
}

void test02(){
    Person p1(10);
    Person p2(10);
    //链式编程
    p2.addAge(p1).addAge(p1);
    cout << p2.age << endl;
}

int mainTHPO(){


    test01();
    test02();
    return 0;
}

