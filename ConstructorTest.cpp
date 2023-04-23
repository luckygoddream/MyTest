//
// Created by 焦文启 on 2023/4/23.
//构造函数调用规则
/**
 * 默认情况下，c++编译器至少给一个类添加3个函数
 * 默认构造函数，默认析构函数，无参 函数体为空
 * 默认拷贝构造函数，对属性进行值拷贝
 * 构造函数调用，如果用户定义了，就用用户定义的
 */
#include "iostream"
using namespace std;
class Person{
public:

    Person(){
        cout << "构造函数的调用" << endl;
    }
    Person(int a){
        cout << "有参构造函数的调用" << endl;
        age = a;
    }
//    Person(const Person &p){
//        cout << "拷贝构造函数的调用" << endl;
//    }
    ~Person(){
        cout << "析构函数的调用" << endl;
    }
    int age;

};
void test01(){
    Person p1;
    p1.age = 18;
    Person p2(p1);
    cout << p2.age << endl;
}

void test02(){
    Person p(28);
    Person p1(p);
}

int mainCON(){

    //test01();
    test02();
    return 0;
}

