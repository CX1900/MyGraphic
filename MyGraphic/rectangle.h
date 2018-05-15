#ifndef RECTANGLE_H
#define RECTANGLE_H
#if RECTANGLE_H
#include"line.h"
#include"point.h"
class rectangle{
public:
    rectangle(int len,int h){length=len,height=h};
private:
    Line l1,l2,l3,l4;
    int length;
    int height;
#endif // RECTANGLE_H
