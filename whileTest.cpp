//
// Created by 焦文启 on 2023/4/10.
//while
#include "iostream"
#include "ctime"
using namespace std;
int main1(){
    //while循环
    int num = 0;
    //添加随机种子，作用利用当前系统时间生成随机数，防止每次随机数都一样
    srand((unsigned int)time(NULL));
    //生成一个随机数0-99 加1位1到100
    int i = rand() % 100 + 1;
    cout << i << endl;
    while (num < 10){
        cout << "num:" << num << endl;
        num++;
    }

    int val = 0;

    while (1){
        cin >> val;
        if (val > i){
            cout << "猜测过大" << endl;
        }
        if (val < i){
            cout << "猜测过小" << endl;
        }
        if (val == i){
            cout << "猜测对了" << endl;
            break;
        }
    }




    return 0;
}
