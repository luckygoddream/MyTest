//
// Created by 焦文启 on 2023/4/22.
//构造函数的分类与调用
/**
 * 有参构造和无参构造
 * 普通构造与拷贝构造
 */
#include "iostream"
using namespace std;
class Person{
public:
    //1.构造函数
    //没返回值 不用写void
    //函数名 与类名相同
    //构造函数可以有参数，可以发生重载
    // 创建对象的时候，构造函数会自动调用，而且只调用一次
    Person(){
        cout << "无参构造函数的调用" << endl;
    }
    Person(int a){
        age = a;
        cout << "有参构造函数的调用" << endl;
    }
    //拷贝构造函数
    Person(const Person &p){ //引用传递
        //赋值，将传入的属性拷贝到当前对象上
        age = p.age;
        cout << "拷贝构造函数的调用" << endl;
    }
    //2.析构函数 进行清理操作
    //没返回值 不用写void
    //函数名 与类名相同 在名称前加~
    //构造函数不可以有参数，不可以发生重载
    //销毁前自动调用析构函数，只会调用一次
    ~Person(){
        cout << "析构函数的调用" << endl;
    }

    int age;
};
//构造函数的调用
void callTest(){
        // 括号法
//        Person p;
//        Person person(10);
//        Person p3(person);
        //调用默认构造函数不要加小括号（）不会创建对象会认为是函数的声明,不会认为在创建对象
//Person p4();
//    cout << person.age << endl;
//    cout << p3.age << endl;
    //  显示法
    Person p1;
    Person p2 = Person(10);//右边单独拿出来称为匿名对象，匿名对象执行结束后，系统会立即回收掉匿名对象
    Person p3 = Person(p2);
// Person(10);//匿名对象，匿名对象执行结束后，系统会立即回收掉匿名对象
//不要利用拷贝构造函数，初始化匿名对象,编译器会认为Person(p3) = Person p3 重定义了重复了
    //Person(p3); 认为是对象的声明
    // 隐式转换法
    Person p4 = 10; // 相当于Person p4 = Person(10)
    Person p5 = p4;//拷贝构造函数调用

}


int main(){
    callTest();
    return 0;
}

