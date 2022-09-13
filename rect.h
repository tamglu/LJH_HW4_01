#ifndef RECT_H
#define RECT_H
#include "shape.h"

class Rect:public Shape
{
public:
    Rect(QGraphicsScene *_scene);
    int x,y;
    virtual void move_up();
    virtual void move_down();
    virtual void move_right();
    virtual void move_left();
    virtual void rotate_cw();
    virtual void rotate_ccw();
    virtual void rotate_stop();
    void Draw();
    QGraphicsLineItem *ver;
    QGraphicsLineItem *hor;
    QGraphicsRectItem *rectangle;
};

#endif // RECT_H
