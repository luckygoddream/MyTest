//
// Created by 焦文启 on 2023/3/27.
//
#include <iostream>
using namespace std;

int main2(){
    //1.char定义
    char c = 'a';
    cout << c << endl;
    //2.占用字节大小
    cout << "char所占字节大小：" << sizeof (char) << endl;

    //3.字符变量常见错误 单引号不能双引号，单引号只能放一个字符

    //4.字符变量的ASCII编码
    cout << (int)c << endl;
    return 0;
}
