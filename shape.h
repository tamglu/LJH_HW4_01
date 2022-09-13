#ifndef SHAPE_H
#define SHAPE_H
#include<QPointF>
#include<QPolygonF>
#include <QGraphicsScene>
#include <QGraphicsItem>
#define PI 3.1415926535
#include<QtMath>
class Shape
{
public:
    Shape(QGraphicsScene *_scene);
    virtual void move_up()=0;
    virtual void move_down()=0;
    virtual void move_right()=0;
    virtual void move_left()=0;
    virtual void rotate_cw()=0;
    virtual void rotate_ccw()=0;
    virtual void rotate_stop()=0;
    int center_x,center_y;
protected:
    QGraphicsScene  *scene;
};

#endif // SHAPE_H
