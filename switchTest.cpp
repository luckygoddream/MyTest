//
// Created by 焦文启 on 2023/4/10.
//switch

#include "iostream"
using namespace std;
int main1(){

    //switch语句
    cout << "请给电影打分：" << endl;
    int score = 0;
    cin >> score;

    cout << "您的分数为:" << score << endl;

    switch (score) {
        case 10:
            cout << "电影很经典" << endl;
            break;
        case 9:
            cout << "挺经典" << endl;
            break;
        case 8:
            cout << "一般经典" << endl;
            break;
        default:
            cout << "烂片" << endl;
            break;
    }


    return 0;
}


