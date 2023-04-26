//
// Created by 焦文启 on 2023/4/26.
//空指针调用成员函数
#include "iostream"
using namespace std;
class Person{
public:
    void showClassName(){
        cout << "this is Person class "<< endl;
    }

    void showAge(){
        if (this == NULL) {
            return;
        }
        //报错是因为传入的指针为空
        cout << "age= "<< age << endl;
    }
    int age;

};
void test01(){
    Person *p = NULL;
    p->showClassName();
     p->showAge();
}

int mainNilP(){

    test01();
    return 0;
}

