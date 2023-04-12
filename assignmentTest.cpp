//
// Created by 焦文启 on 2023/4/9.
//赋值运算
#include "iostream"
using namespace std;
int main1(){
    int a = 10;
    cout << "a=" << a << endl;
    //+= -= *= /=
    a += 2; //a = a + 2;
    cout << "a=" << a << endl;
    a -= 2;//a = a - 2;
    cout << "a=" << a << endl;
    a *= 2;// a = a * 2
    cout << "a=" << a << endl;
    a /= 2;//a = a / 2;
    cout << "a=" << a << endl;
    a %= 3;//a = a % 3;
    cout << "a=" << a << endl;

    return 0;

}

