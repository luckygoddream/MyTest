//
// Created by 焦文启 on 2023/4/6.
//字符串学习
#include <iostream>
#include <string> //用C++风格字符串，要包含这个头文件
using namespace std;
int main1(){
    //1.C风格字符串
    //注意 char 字符串名 【】
    //注意2 等号后面要用双引号包含起来的字符串
    char str[] = "Hello World";
    cout << str << endl;
    //2.C++风格字符串
    //包含一个头文件 #include <string>
    string str2 = "hello world";
    cout << str2 << endl;
    return 0;
}

