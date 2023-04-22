//
// Created by 焦文启 on 2023/4/22.
//构造函数和析构函数
/**
 * 对象的初始化和清理
 * 1，构造函数 进行初始化
 */
#include "StructureAndDestructorTest.h"
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
        cout << "构造函数的调用" << endl;
    }
    //2.析构函数 进行清理操作
    //没返回值 不用写void
    //函数名 与类名相同 在名称前加~
    //构造函数不可以有参数，不可以发生重载
    //销毁前自动调用析构函数，只会调用一次
    ~Person(){
        cout << "析构函数的调用" << endl;
    }

};
//构造和析构必须有的，我们不写，编译器会提供一个空实现的析构与构造
void testPerson(){
    Person p;//栈上的数据，testPerson执行完，释放这个对象
}


int mainSAD(){

    testPerson();

    return 0;
}
