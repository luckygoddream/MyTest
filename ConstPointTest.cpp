//
// Created by 焦文启 on 2023/4/13.
//
/**
 * const修饰指针有三种情况：
 * 1，const修饰指针 -- 常量指针
 * 2，const修饰常量 -- 指针常量
 * 3，const即修饰指针，又修饰常量
 *
 */

#include "iostream"
using namespace std;
int main1(){
    int a = 10;
    int b = 10;
    //int * p = &a;
    //常量指针，指针的指向可以修改，但是指针指向的值不能修改
    const int * p = &a;
    *p = 20;//不可以改
    p = &b;//可以改
    //指针常量,指针的指向不可以改，指针指向的值可以改
    int * const i = &a;
    *i = 20;//可以改
    i = &b;//不可以改

    //const即修饰指针，又修饰常量,指针指向和指向的值都不能改
    const int * const j = &a;
    *j = 20;//不可以改
    j = &b;//不可以改

    return 0;
}