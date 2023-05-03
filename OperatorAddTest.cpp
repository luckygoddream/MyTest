//
// Created by 焦文启 on 2023/5/3.
//加号运算符重载

#include "OperatorAddTest.h"
#include "iostream"

using namespace std;

//加号运算符重载
class Person {
public:
    //成员函数实现运算符重载
//    Person operator+(Person &p) {
//        Person temp;
//        temp.m_B = this->m_B + p.m_B;
//        temp.m_A = this->m_A + p.m_A;
//        return temp;
//    }

    int m_A;
    int m_B;
};

//全局函重载+号 也可以函数重载
Person operator+(Person &p1, Person &p2) {
    Person temp;
    temp.m_B = p1.m_B + p2.m_B;
    temp.m_A = p1.m_A + p2.m_A;
    return temp;
}
Person operator+(Person &p1, int num) {
    Person temp;
    temp.m_B = p1.m_B + num;
    temp.m_A = p1.m_A + num;
    return temp;
}

void test01() {
    Person p1;
    p1.m_A = 10;
    p1.m_B = 10;
    Person p2;
    p2.m_A = 10;
    p2.m_B = 10;
    Person p3 = p1 + p2;
    cout << p3.m_A << endl;
    cout << p3.m_B << endl;
    Person p4 = p1 + 10;
    cout << p4.m_A << endl;
    cout << p4.m_B << endl;
}

int main() {
    test01();
    return 0;
}
