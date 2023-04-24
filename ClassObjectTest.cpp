//
// Created by 焦文启 on 2023/4/24.
//类对象作为类的成员
#include "iostream"
using namespace std;
//类对象作为类成员

class Phone{
public:
    Phone(string t){
        type = t;
        cout << "Phone" <<endl;
    }
    ~Phone(){
        cout << "Phone析构调用" << endl;
    }
    string type;
};

class Person{
public:
    //Phone phone = t;隐式转换法
    Person(string n,string t):name(n), phone(t){
        cout << "Person" <<endl;
    }
    ~Person(){
        cout << "Person析构调用" <<endl;
    }
    string name;
    Phone phone;
};
//当其他类对象作为本类成员，构造时候先构造类对象，在构造自身,析构的顺序与构造相反
void test01(){
    Person p("xj","sanxing");
    cout << p.phone.type << endl;
}


int mainCO(){


    test01();
    return 0;
}

