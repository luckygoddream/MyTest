//
// Created by 焦文启 on 2023/4/12.
//函数学习
#include "iostream"
using namespace std;

int add(int a, int b){
    int sum = a+b;
    return sum;
}

void swap(int a,int b){
    int temp = b;
    b = a;
    a = temp;
    cout << a << endl;
    cout << b << endl;
    //return;返回值不需要，return
}


int main(){
    int sum = add(1,2);
    swap(4,0);
    cout << sum << endl;
    return 0;
}

