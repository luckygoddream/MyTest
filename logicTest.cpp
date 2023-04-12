//
// Created by 焦文启 on 2023/4/9.
//逻辑预算符
#include "iostream"
using namespace std;
int main1(){
    int a = 10;
    //C++中除了0都是真，10表示真去非就是假
    cout << !a << endl;
    cout << !!a << endl;
    // 逻辑与：&& ，同真为真，其余为假
    int b = 10;
    cout << (a && b) << endl;
    //假
    a = 0;
    cout << (a && b) << endl;
    //假
    b = 0;
    cout << (a && b) << endl;

    //逻辑或：|| ，同假为假，其余为真

    //真
    a = 10;
    b = 10;
    cout << (a || b) << endl;

    //真
    a = 10;
    b = 0;
    cout << (a || b) << endl;

    //假
    a = 0;
    b = 0;
    cout << (a || b) << endl;

    return 0;
}

