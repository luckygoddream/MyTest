//
// Created by 焦文启 on 2023/4/12.
//分文件编写

#include "FenWenJian.h"
#include "iostream"
using namespace std;



int main(){
    int sum = max(5,7);

    cout << sum << endl;
    return 0;
}
int max(int a,int b){
    return a > b ? a : b;
}
