//
// Created by 焦文启 on 2023/4/12.
//函数的声明
#include "iostream"
using namespace std;

//函数的声明，告诉编译器函数存在，可以多次声明，只能定义一次
//函数在main函数后面，得先声明
//int max(int a,int b);
//int max(int a,int b);


int main1(){
    int sum = max(10,20);
    cout << sum << endl;
    return 0;
}

//int max(int a,int b){
//    return a > b ? a : b;
//}

