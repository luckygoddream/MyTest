//
// Created by 焦文启 on 2023/4/26.
//const修饰成员函数
/**
 * 成员函数后加const，我们称这个函数为常函数
 * 常函数内不可以修改成员属性
 * 成员属性声明时加关键字mutable后，在常函数中依然可以修改
 *
 * 声明对象前加const称该对象为常对象
 * 常对象只能调用常函数
 */
#include "iostream"
using namespace std;

class Person{
public:
    //this指针的本质 是指针常量，指针的指向不能修改
    //const Person * const this
    //const修饰的this指向，让指针指向的值也不可以修改
    void showPerson() const {
        this->b = 200;
        //a = 100;
        //this = NULL;//this指针不可以修改指针的指向
    }
    void func(){

    }
    int a;
    mutable int b;//加上mutable关键字，特殊变量，即使在常函数中，也可以修改这个值
};
void test(){
    Person p;
    p.showPerson();
}
void test2(){
    const Person p1{};//对象前加const为常对象
    p1.b = 100;//b是特殊值，在常对象下可以修改
    //常对象只能调用常函数
    p1.showPerson();
    //p1.func();//常对象不可以调用普通成员函数，因为普通成员函数可以修改属性
}

int mainCMF(){

    test();
    return 0;
}

