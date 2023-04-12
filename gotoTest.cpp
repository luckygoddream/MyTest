//
// Created by 焦文启 on 2023/4/10.
//goto 跳转
#include "iostream"
using namespace std;
int main1(){

    //goto
    cout << "xxxx" << endl;
    cout << "22222" << endl;
    goto FLAG;
    cout << "333333" << endl;
    cout << "44444" << endl;
    FLAG:
    cout << "666" << endl;


    return 0;
}

