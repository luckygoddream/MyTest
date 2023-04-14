//
// Created by 焦文启 on 2023/4/14.
//结构体嵌套结构体

#include "StructAndStructTest.h"
#include "iostream"
#include "string"
using namespace std;
//注意定义结构体顺序
struct student{
    string name;
    int age;
    int score;
};
struct teacher{
    int id;
    string name;
    int age;
    struct student stu;
};
int mainSAS(){

    teacher t;
    t.name = "laowang";
    t.stu.name = "xiaowang";
    cout << t.name << endl;
    cout << t.stu.name << endl;
    return 0;
}