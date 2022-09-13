#ifndef TRI_H
#define TRI_H
#include "shape.h"

class Tri:public Shape
{
public:
    Tri(QGraphicsScene *_scene);
    int x1,y1,x2,y2,x3,y3;

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
    QGraphicsPolygonItem *triangle;


};

#endif // TRI_H
