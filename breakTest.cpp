//
// Created by 焦文启 on 2023/4/10.
//break continue
#include "iostream"
using namespace std;
int main1(){

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (j == 5){
                continue;
            }
            cout << j << endl;
        }
        if (i == 5){
            break;
        }
    }

    return 0;
}

