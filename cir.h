#ifndef CIR_H
#define CIR_H
#include "shape.h"

class Cir:public Shape
{
public:
    Cir(QGraphicsScene *_scene);
    int x,y;
    double ro_x=0;
    double ro_y=0;
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
    QGraphicsEllipseItem *circle;
    QGraphicsEllipseItem *rotat;
};

#endif // CIR_H
