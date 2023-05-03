//
// Created by 焦文启 on 2023/5/3.
//类做友元
#include "iostream"
using namespace std;

class Building;
class GoodGay{
public:
    GoodGay();
    void visit();//参观函数，访问Building中的属性
    Building * building;
};
class Building{
    //GoodGay是本类的好朋友，可以访问本类私有属性
    friend class GoodGay;
public:
    Building();
    string m_SittingRoom;//客厅
private:
    string m_BedRoom;//卧室
};
//类外成员函数
Building::Building(){
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}
GoodGay::GoodGay() {
    //创建建筑物对象
    building = new Building;
}
void GoodGay::visit() {
    cout << "好基友类正在访问：" << building->m_SittingRoom << endl;
    cout << "好基友类正在访问：" << building->m_BedRoom << endl;
}
void test01(){
    GoodGay gg;
    gg.visit();
}
int mainFRIE2(){
    test01();

    return 0;
}

