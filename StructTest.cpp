//
// Created by 焦文启 on 2023/4/13.
//结构体 struct
/**
 * 结构体属于用户自定义的数据类型，允许用户存储不同的数据类型
 * 语法：struct 结构体名 {结构体成员列表};
 * 结构体创建变量有三种方式：
 * struct 结构体名 变量名
 * struct 结构体名 变量名 = {成员1值，成员2值};
 * 定义结构体时顺便创建变量
 */

#include "StructTest.h"
#include "iostream"
#include "string"
using namespace std;
//自定义类型，定义类型不能省略struct关键字
//1，创建学生的数据类型
struct student{
    string name;
    int age;
    int score;
} s3;
//2，通过学生类型创建具体学生


int main1(){


    //struct 关键字可以省略，
    struct student s1;
    s1.name = "zs";
    s1.age = 15;
    s1.score = 50;
    cout << s1.name << endl;

    struct student s2 = {"ls",23,90};
    cout << s2.name << endl;


    s3.name = "ww";
    s3.age = 20;
    s3.score = 88;
    cout << s3.name << endl;
    return 0;



}

