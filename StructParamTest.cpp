//
// Created by 焦文启 on 2023/4/14.
//结构体作为参数

#include "StructParamTest.h"
#include "iostream"
using namespace std;

struct student{
    string name;
    int age;
    int score;
};
//值传递
void printStu(student stu){
    cout << stu.name << endl;
}

//地址传递
void printStu1(student *stu){
    cout << stu->name << endl;
}

int mainSP1(){

    student stu;
    stu.name = "ls";
    printStu(stu);
    printStu1(&stu);

    return 0;
}
