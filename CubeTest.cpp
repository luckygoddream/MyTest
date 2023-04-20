//
// Created by 焦文启 on 2023/4/20.
//练习：立方体类

#include "CubeTest.h"
#include "iostream"
using namespace std;
class Cube{
private:
    int height;
    int width;
    int length;
public:
    int getHeight(){
        return height;
    }
    int getWidth(){
        return width;
    }
    int getLength(){
        return length;
    }
    void setHeight(int h){
        height = h;
    }
    void setWidth(int w){
        width = w;
    }
    void setLength(int l){
        length = l;
    }

    int getVolume (){
        return height * width * length;
    }

    int getArea (){
        return height * width * 2 + height * length * 2 + width * length * 2;
    }

    bool isSameByClass(Cube &c){
        if (height == c.getHeight() && length == c.getLength() && width == c.getWidth()){
            return true;
        }
        return false;
    }

};

bool isSame(Cube &c1,Cube &c2){
    if (c1.getHeight() == c2.getHeight() && c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth()){
        return true;
    }
    return false;
}

int mainCube(){

   Cube c;
   c.setHeight(10);
   c.setLength(20);
   c.setWidth(15);
   cout << c.getArea() << endl;
   cout << c.getVolume() << endl;

    Cube c1;
    c1.setHeight(10);
    c1.setLength(20);
    c1.setWidth(15);
    bool flag = isSame(c,c1);
    bool f = c.isSameByClass(c1);
    cout << flag << endl;
    cout << f << endl;
    return 0;
}

