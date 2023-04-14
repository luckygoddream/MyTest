//
// Created by 焦文启 on 2023/4/15.
//

#include "HeroTest.h"
#include "iostream"
using namespace std;
struct Hero{
    string name;
    int age;
    int sex;
};
void bubble(int len ,Hero hero[]){
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len-i-1; j++) {
            if (hero[j].age > hero[j+1].age){
                Hero h = hero[j];
                hero[j] = hero[j+1];
                hero[j+1] = h;
            }
        }
    }
    for (int i = 0; i < len; i++) {
        cout << hero[i].age << endl;
    }
}
int main(){

    Hero hero[5] = {
            {"gy",15,1},
            {"zf",25,1},
            {"lb",21,1},
            {"zy",23,1},
            {"dc",22,0}
    };
    int len = sizeof(hero) / sizeof(hero[0]);
    bubble(len,hero);
    return 0;
}
