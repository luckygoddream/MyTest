//
// Created by 焦文启 on 2023/4/11.
//数组
#include "iostream"
using namespace std;
int main1(){
    //放在一块连续的内存中，每个元素都是相同类型数据的
    int arr[5];
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 10;
    arr[4] = 10;
    cout << arr[4] << endl;

    int arr2[5] = {0,10,20,30,49};
    cout << arr2[4] << endl;

    for (int i = 0; i < 5; ++i) {
        cout << arr2[i] << endl;
    }

    cout << sizeof(int ) << endl;
    int arr3[] = {1,2,3,4,5};
    //一维数组名称的用途
    //1.可以统计整个数组在内存中的长度
    cout << sizeof(arr3) << endl;
    cout << sizeof(arr3[0]) << endl;
    //2.可以获取数组在内存中的首地址
    cout << arr3 << endl;
    //数组中第一个元素的地址为
    cout << &arr3[0] << endl;
    //数组中第二个元素的地址为
    cout << &arr3[1] << endl;

//    int max = 0;
//    for (int i = 0; i < 5; ++i) {
//        if (arr3[i] > max){
//            max = arr3[i];
//        }
//    }
//    cout << max << endl;
//
//    int end = sizeof(arr3)/ sizeof(arr3[0]);
//    cout << end << endl;
//    int temp = 0;
//    for (int i = 0; i < end / 2; i++) {
//        temp = arr3[end-i-1];
//        arr3[end-i-1] = arr3[i];
//        arr3[i] = temp;
//    }
//    for (int i = 0; i < end; ++i) {
//        cout << arr3[i] << endl;
//    }


    int start = 0;
    int length = sizeof(arr3)/ sizeof(arr3[0]) - 1;
    int tem = 0;
    while (start < length){
        tem = arr3[length];
        arr3[length] = arr3[start];
        arr3[start] = tem;
        start++;
        length--;
    }

    for (int i = 0; i < 5; i++) {
        cout << arr3[i] << endl;
    }


    return 0;
}

