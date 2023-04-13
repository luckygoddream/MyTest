//
// Created by 焦文启 on 2023/4/13.
//空指针和野指针
#include "iostream"
using namespace std;
int main1(){
        //空指针用于给指针变量进行初始化
        int * p = NULL;
        //cout << p << endl;
        //空指针是不可以进行访问的,0~255内存编号是系统占用的，因此不能访问
        *p = 100;
        //cout << p << endl;

        //野指针：指针指向非法的内存空间，程序中应当避免出现野指针
        int * i = (int *)0x1100;
        cout << *i << endl;
        /**
         * 强调：空指针和野指针都不是我们申请的空间，因此不要访问，不要访问，不要访问！！！
         */
    return 0;
}

