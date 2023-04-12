//
// Created by 焦文启 on 2023/4/10.
//for循环
#include "iostream"
using namespace std;
int main1(){
    for (int i = 0; i < 10; ++i) {
        cout << i << endl;
    }

//    for (int i = 0; i < 100; ++i) {
//        int a = i % 10;
//        int b = i / 10 % 10;
//
//        if (i % 7 == 0 || a == 7 || b == 7){
//            cout << i << endl;
//        }
//    }
    //外层执行一次，内层执行一周
    //乘法口诀表
    for (int i = 0; i < 10; ++i) {
        for (int j = 1 ; j < i + 1; j++) {
            cout << j << "x" << i << "=" << i*j  << " ";
        }
        cout << endl;
    }

    return 0;
}
