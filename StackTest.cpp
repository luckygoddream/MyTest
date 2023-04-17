//
// Created by 焦文启 on 2023/4/17.
//栈区

#include "StackTest.h"
#include "iostream"
using namespace std;
//栈区数据注意事项：不要返回局部变量的地址
//栈区数据由编译器管理开辟和释放

int* func(int b){//形参数据也放在栈区
    b = 10;
    int a = 10;//局部变量，存放在栈区，栈区的数据在函数执行完后自动释放
    return &a ;//返回局部变量的地址
}

int mainStack(){
    int *p = func(1);
    cout << *p << endl;//第一次打印是编译器做了保留
    cout << *p << endl;//第二次就不保留了

    return 0;
}
