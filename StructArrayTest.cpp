//
// Created by 焦文启 on 2023/4/13.
//结构体数组
/**
 * 将自定义的结构体放入到数组中方便维护
 * 语法：struct 结构体名 数组名[元素个数]={{},{},{},...{}};
 */
#include "iostream"
#include "string"
using namespace std;

//结构体
struct student{
    string name;
    int age;
    int score;
};
int mainStruct(){
    //结构体数组
    struct student stuArr[3] = {
            {"zs",15,90},
            {"ls",25,88},
            {"ww",20,80}
    };
    stuArr[0] = {"qq",22,99};
    for (int i = 0; i < 3; i++) {
        cout << stuArr[i].name << endl;
    }

    return 0;
}


