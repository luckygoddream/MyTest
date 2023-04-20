//
// Created by 焦文启 on 2023/4/20.
//
/**
 * 成员属性设置为私有
 * 1，成员属性设置为私有，可以自己控制读写权限
 * 2，对于写权限，我们可以检测数据的有效性
 */

#include "PrivateAttributeTest.h"
#include "iostream"
using namespace std;
class Person{
private:
    string name;
    int age;
    string love;

public:
    void setName(string n){
        name = n;
    }

    string getName(){
        return name;
    }
};


int mainPrivate(){
    Person p;
    p.setName("zhangsan");
    cout << p.getName() << endl;



    return 0;
}
