//
// Created by 焦文启 on 2023/4/24.
//静态成员函数
#include "iostream"
using namespace std;
//静态成员函数
//所有对象共享同一个函数，静态成员函数只能访问静态成员变量
class Person{
public:
    static void func(){
        a = 100;//静态成员函数可以访问静态成员变量
        //b = 200;//静态成员函数不可以访问非静态成员变量
        cout << "static void func调用" << endl;
    }
    static int a;
    int b;
    //静态成员函数也是有访问权限的
private:
    static void func2(){
    }
};

int Person::a = 200;
void test(){
    //1.通过对象访问
    Person p;
    p.func();
    //2、通过类名访问
    Person::func();
    //Person::func2();//私有的类外不能访问
}
int main(){
    test();

    return 0;
}

