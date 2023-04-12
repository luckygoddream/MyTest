//
// Created by 焦文启 on 2023/4/9.
//选择结构 if
#include "iostream"
using namespace std;
int main1(){

    //选择结构 单if
    int score = 0;
    cout << "请输入：" << endl;
    cin >> score;
    cout << "输入的是：" << score << endl;
    if (score >= 600){
        cout << "你满足了条件" << endl;
    }
    //多行if
    if (score >= 600){
        cout << "你满足了条件" << endl;
    } else {
        cout << "你不满足条件" << endl;
    }

    //多条件if
    if (score >= 600){
        //嵌套if
        if (score >= 700){
            cout << "你的条件最好" << endl;
        } else if (score >= 600){
            cout << "你的条件第二好" << endl;
        }
        cout << "你满足了条件" << endl;
    } else if (score >=500) {
        cout << "你只满足第二条件" << endl;
    }else {
        cout << "你不满足条件" << endl;
    }

    return 0;
}

