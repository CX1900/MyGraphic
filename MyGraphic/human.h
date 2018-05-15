#ifndef HUMAN_H
#define HUMAN_H
#include<Qpainter>
#include"line.h"
class human{
public:
    human(){}
    void paintEvent(QPaintEvent *);
    ~human(){}
private:
};
//QPainter.drawEllipse(x,y,x-radius,y-radius);
#endif // HUMAN_H
