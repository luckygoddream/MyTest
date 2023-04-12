//
// Created by 焦文启 on 2023/4/12.
//二维数组
#include "iostream"
using namespace std;
int main1(){
    //二维数组的定义方式


    int arr[2][3];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;
    //arr = {{1,2,3},{4,5,6}};
    cout << arr[0][1] << endl;
//    for (int i = 0; i < 2 ; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << arr[i][j] << endl;
//        }
//    }

    int arr2[2][3] = {{1,2,3},{4,5,6}};
//    for (int i = 0; i < 2 ; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << arr2[i][j] << " ";
//        }
//        cout << endl;
//    }
    //这样也可以表示二维数组，3个一行
    int arr3[2][3] = {1,2,3,4,5,6};
    for (int i = 0; i < 2 ; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    int arr4[][3] = {1,2,3,4,5,6};
    for (int i = 0; i < 2 ; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += arr4[i][j];
            //cout << arr4[i][j] << " ";
        }
        cout << sum << endl;
        cout << endl;
    }

    //查看二维数组所占内存空间
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << sizeof(arr[0][0]) << endl;
    //查看首个元素的地址
    cout << arr << endl;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    //&取址标志
    cout << &arr[0][0] << endl;


    return 0;
}

