//
// Created by 焦文启 on 2023/4/14.
//练习
#include "iostream"
using namespace std;
struct People {
    string name;
    int score;
    int age;
};
struct Teacher{
    string name;
    struct People p[5];

};

void printAll(int len ,Teacher teacher[]){
    for (int i = 0; i < len; i++) {
        cout << teacher[i].name << endl;
        for (int j = 0; j < 5; j++) {
            cout << teacher[i].p[j].name  << " ";
            cout << teacher[i].p[j].age << " ";
            cout << teacher[i].p[j].score << " ";
        }
        cout << endl;
    }
}
void setParam(int len ,Teacher t[]){
    string needName = "ABCDE";
    for (int i = 0; i < len; i++) {
        t[i].name = "Teacher_";
        t[i].name+=needName[i];
        for (int j = 0; j < 5 ; j++) {
            t[i].p[j].name = "Student_";
            t[i].p[j].name += needName[j];
            t[i].p[j].age = j + 15;
            int sc = rand() % 60 + 40;
            t[i].p[j].score = sc;
        }
    }
    printAll(len,t);
}

int mainTAS(){

    srand((unsigned int)time(NULL));
    struct Teacher t[3];
    int len = sizeof(t)/ sizeof(t[0]);
    cout << len << endl;
    setParam(len,t);

    return 0;
}

