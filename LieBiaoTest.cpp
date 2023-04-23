//
// Created by 焦文启 on 2023/4/23.
//初始化列表

#include "LieBiaoTest.h"
#include "iostream"
using namespace std;

class Person{
public:

//    Person(){
//        cout << "构造函数的调用" << endl;
//    }
//    Person(int a,int s,int l){
//        cout << "有参构造函数的调用" << endl;
//        age = a;
//        score = s;
//        level = l;
//
//    }

    ~Person(){
        cout << "析构函数的调用" << endl;
    }
    //初始化列表初始化属性
//    Person():age(10),score(20),level(30){
//
//    }
    Person(int a,int s,int l):age(a),score(s),level(l){

    }
    int age;
    int score;
    int level;


};

void test01(){
   // Person p(10,20,30);
    Person p();
}

int mainLieBiao(){


    return 0;
}
