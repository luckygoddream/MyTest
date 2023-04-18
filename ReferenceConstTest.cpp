//
// Created by 焦文启 on 2023/4/18.
//常量引用

#include "ReferenceConstTest.h"
#include "iostream"
using namespace std;
//常量引用主要用来修饰形参，防止误操作

void showValue(const int & val){//加上const防止误操作
 //   val = 1000;//不能修改值
    cout << val << endl;
}

int main(){
    //int a = 10;
    //加上const后，编译器将代码修改int temp = 10; const int & ref = temp;
    //const int  & ref = 10;//引用必须引用合法的内存空间,加上const只读，不可以修改

    int a = 100;

    showValue(a);

    cout << a << endl;

    return 0;
}
