//
// Created by 焦文启 on 2023/4/9.
//三只小猪称重
#include "iostream"
using namespace std;
int main1(){
    int pig1 = 0;
    int pig2 = 0;
    int pig3 = 0;
    cin >> pig1;
    cin >> pig2;
    cin >> pig3;

    //判断谁重
    if(pig1 > pig2){
        if (pig1 > pig3){
            cout << "1" <<endl;
        } else{
            cout << "3" <<endl;
        }
    } else {
        if (pig2 > pig3){
            cout << "2" <<endl;
        } else {
            cout << "3" <<endl;
        }
    }


    return 0;

}

