//
// Created by 焦文启 on 2023/5/3.
//友元函数
/**
 * 全局函数做友元函数
 */
#include "FriendFunction.h"
#include "iostream"
using namespace std;
//建筑物类
class Building{
    //此全局函数是Building好朋友，可以访问Building中私有成员
    //声明
    friend void goodGay(Building *building);

public:
    Building(){
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }
public:
    string m_SittingRoom;//客厅
private:
    string m_BedRoom;//卧室

};
//全局函数
void  goodGay(Building *building){
    cout << "好基友全局函数正在访问：" << building->m_SittingRoom << endl;

    cout << "好基友全局函数正在访问：" << building->m_BedRoom << endl;
}
void test01(){
    Building building;
    goodGay(&building);
}
int mainFRIE1(){
    test01();
    return 0;
}