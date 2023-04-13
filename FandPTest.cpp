//
// Created by 焦文启 on 2023/4/13.
//函数和指针
/**
 * 指针作为函数的参数，可以修改实参的值
 */
#include "iostream"
using namespace std;

void swap(int *a,int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

int main1(){

    //地址传递
    int a = 10;
    int b = 20;
    swap(&a,&b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}
