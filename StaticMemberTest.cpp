//
// Created by 焦文启 on 2023/4/24.
//静态成员
#include "iostream"
/**
 * 静态成员就是在成员变量和成员函数前加上static关键字，称为静态成员
 * 静态成员分为：
 *    静态成员变量：
 *    所有对象共享一份数据
 *    在编译阶段分配内存
 *    类内声明，类外初始化
 *    静态成员函数：
 *    所有对象共享一个函数
 *    静态成员函数只能访问静态成员变量
 */
using namespace std;
class Person{

public:
    static int a;
//静态变量有访问权限
private:
    static int b;

};
int Person::a = 100;
int Person::b = 100;

void test(){
    Person p;
    cout << p.a << endl;
    Person p1;
    p1.a = 200;
    cout << p.a << endl;
    //cout << p.b << endl; 无法访问
}
void test2(){
    //静态成员变量，不属于某个对象上，所有对象都共享同一份数据，因此静态成员变量有两种访问方式
    //对象访问
    Person p;
    cout << p.a << endl;
    //类名访问
    cout << Person::a << endl;
}


int mainSTM(){

    //test();
    test2();
    return 0;
}

