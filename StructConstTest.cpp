//
// Created by 焦文启 on 2023/4/14.
//结构体const使用

#include "StructConstTest.h"
#include "iostream"
using namespace std;

struct student{
    string name;
    int age;
    int score;
};

void printStudent(const student *stu){
    //stu->name = 100;//不能修改
    cout << stu->name << endl;
}

int mainSC1(){
    student s = {"zs",14,90};
    //传递改为指针，可以减少空间内存，而且不会复制新的副本出来，但是指向的值容易误操作
    //加上const就不能修改了，修改会报错
    printStudent(&s);


    return 0;
}