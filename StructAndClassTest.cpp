//
// Created by 焦文启 on 2023/4/20.
//struct与class的区别
/**struct与class的区别：
 * struct默认权限为公共
 * class默认权限为私有
 */
#include "iostream"
using namespace std;
class C1{
    int A;//默认权限是私有的
};

struct C2{
    int A;//默认权限是公共的
};

int mainCandC(){
    C1 c ;
    //c.A= 100;不能访问
    C2 c2;
    c2.A = 50;

    return 0;
}


