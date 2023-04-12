//
// Created by 焦文启 on 2023/4/11.
//冒泡排序
#include "iostream"
using namespace std;
int main1(){

    int arr[] = {9,5,7,8,2,0};
    int length = sizeof(arr) / sizeof(arr[0]);
    int temp = 0;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < length; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}

