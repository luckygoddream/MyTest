//
// Created by 焦文启 on 2023/4/13.
//结构体指针
/**
 * 通过指针访问结构体的成员
 * 利用操作符->可以通过结构体指针访问结构体属性
 */
#include "StructPointTest.h"
#include "iostream"
#include "string"
using namespace std;

//结构体
struct student{
    string name;
    int age;
    int score;
};
int mainSP(){
    //创建结构体
    student stu = {"张三",23,90};
    //通过指针指向结构体变量
    student * p = &stu;
    //通过指针访问结构体变量中的数据
    p->name;
    //利用操作符->可以通过结构体指针访问结构体属性
    cout << p->name << endl;
    return 0;
}