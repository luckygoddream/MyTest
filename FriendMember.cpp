//
// Created by 焦文启 on 2023/5/3.
//成员函数做友元
#include "iostream"
using namespace std;
class Building;
class GoodGay{
public:
    GoodGay();
    Building * building;
    void visit();//让这个可以访问Building私有成员
    void visit2();//让这个不可以访问Building私有成员

};
class Building{
    //告诉编译器GoodGay下visit成员函数，作为本类好友，可以访问私有内容
    friend void GoodGay::visit();
public:
    Building();
public:
    string m_SittingRoom;//客厅
private:
    string m_BedRoom;//卧室

};
//类外实现函数
Building::Building() {
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
};
GoodGay::GoodGay() {
    building = new Building;
}
void GoodGay::visit() {
    cout << "visit正在访问：" << building->m_SittingRoom << endl;
    cout << "visit正在访问：" << building->m_BedRoom << endl;
}
void GoodGay::visit2() {
    cout << "visit2正在访问：" << building->m_SittingRoom << endl;
}
void test01(){
    GoodGay gg;
    gg.visit();
    gg.visit2();
}
int mainFRIE3(){
    test01();

    return 0;
}
