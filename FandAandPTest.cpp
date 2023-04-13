//
// Created by 焦文启 on 2023/4/13.
//函数，数组，指针
#include "iostream"
using namespace std;
void bubble(int * arr,int len){
    for (int i = 0; i < len-1 ; i++) {
        for (int j = 0; j < len -i-1; j++) {
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int * arr,int len){
    for (int i = 0; i < len ; i++) {
        cout << arr[i] << endl;
    }
}

int main1(){

    int arr[10] = {4,3,9,1,2,8,7,5,10,6};
    int len = sizeof(arr) / sizeof(arr[0]);
    //排序
    bubble(arr,len);
    //打印
    printArray(arr,len);

    return 0;
}

