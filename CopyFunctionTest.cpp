
//
// Created by 焦文启 on 2023/4/23.
//拷贝函数的调用
/**拷贝构造函数调用时机
 * 1.使用一个已经创建完毕的对象来初始化一个新对象
 * 2.值传递的方式给函数参数传值
 * 3.以值方式返回局部对象
 */
#include "iostream"
using namespace std;

class Person{
public:

    Person(){
        cout << "构造函数的调用" << endl;
    }
    Person(int a){
        age = a;
    }
    Person(const Person &p){
        cout << "拷贝构造函数的调用" << endl;
    }

    ~Person(){
        cout << "析构函数的调用" << endl;
    }
    int age;

};
//1.使用一个已经创建完毕的对象来初始化一个新对象
void test01(){
    Person p1(20);
    Person p2(p1);
}

//2.值传递的方式给函数参数传值
void doWork(Person p){

}
void test02(){
    Person p;
    doWork(p);
}

//3.以值方式返回局部对象
Person doWork2(){
    Person p1;
    return p1;
}
void test03(){
    Person p = doWork2();

}

int mainCOPY(){

    //test01();
    //test02();
    test03();
    return 0;
}

