//
// Created by 焦文启 on 2023/4/23.
//深拷贝与浅拷贝
#include "iostream"
/**
 * 深拷贝：在堆区重新申请空间，进行拷贝操作
 * 浅拷贝：简单的复制拷贝操作 有堆区重新释放的问题
 */
using namespace std;

class Person{
public:

    Person(){
        cout << "构造函数的调用" << endl;
    }
    Person(int a,int h){
        cout << "有参构造函数的调用" << endl;
        age = a;
        height = new int(h);
    }

        Person(const Person &p){
        cout << "拷贝构造函数的调用" << endl;
        age = p.age;
        //深拷贝操作
        height = new int (*p.height);//int 是整形得解引用才行，p为十六进制数据，解引用后才是整形
    }
    ~Person(){
        cout << "析构函数的调用" << endl;
        //将堆区开辟数据释放掉
        if (height != NULL){
            delete height;
            height = NULL;
        }
    }
    int age;
    int *height;//地址 指向堆区的值

};

void test01(){
    Person p1(10,150);
    Person p2(p1);
    cout << p1.age << *p1.height << endl;
    cout << p2.age << *p2.height<<endl;
}

int mainDEEP(){

    test01();
    return 0;
}

