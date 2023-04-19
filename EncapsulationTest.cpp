//
// Created by 焦文启 on 2023/4/19.
//类的三大特性之封装
/**
 * 类中的属性和行为，我们统一称为成员
 * 属性也叫成员属性或者成员变量
 * 行为叫成员函数或成员方法
 */
#include "EncapsulationTest.h"
#include "iostream"
using namespace std;
const double PI = 3.14;
//设计一个园类，求周长
//class 代表设计一个类
class Circle{
    //访问权限
    //公共权限
public:
    //属性
    int r;
    //行为，获取园的周长
    double calculateZC(){
        return 2 * PI * r;
    }

};

class Student{
public:
    string name;
    int id;
    void showStudent(){
        cout << name << endl;
        cout << id << endl;
    }

    void setName(string n){
        name = n;
    }
    void setId(int i){
        id = i;
    }

};

int main(){
    //通过圆类创建圆 实例化
    Circle c;
    //属性赋值
    c.r = 10;
    cout<< "园的周长为：" << c.calculateZC() << endl;

    Student student;
    student.setId(1) ;
    student.setName("小紫") ;
    student.showStudent();

    return 0;
}



