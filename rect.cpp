#include "rect.h"

Rect::Rect(QGraphicsScene *_scene):Shape(_scene)
{
    center_x=0;
    center_y=0;
    x=center_x-20;
    y=center_y-15;
}
void Rect::move_up()
{
    center_y-=5;
    x=center_x-20;
    y=center_y-15;
}
void Rect::move_down()
{
    center_y+=5;
    x=center_x-20;
    y=center_y-15;
}
void Rect::move_right()
{
    center_x+=5;
    x=center_x-20;
    y=center_y-15;
}
void Rect::move_left()
{
    center_x-=5;
    x=center_x-20;
    y=center_y-15;
}
int r_deg=0;
void Rect::rotate_cw()
{
    scene->clear();
    r_deg++;
    QBrush Rbrush(Qt::black);
    QPen Rpen(Qt::black);
    Rpen.setWidth(2);
    rectangle=scene->addRect(x,y,40,30,Rpen,Rbrush);
    rectangle->setTransformOriginPoint(center_x,center_y);
    rectangle->setRotation(r_deg);
    rectangle->show();
}
void Rect::rotate_ccw()
{
    scene->clear();
    r_deg--;
    QBrush Rbrush(Qt::black);
    QPen Rpen(Qt::black);
    Rpen.setWidth(2);
    rectangle=scene->addRect(x,y,40,30,Rpen,Rbrush);
    rectangle->setTransformOriginPoint(center_x,center_y);
    rectangle->setRotation(r_deg);
    rectangle->show();
}
void Rect::rotate_stop()
{
    x=center_x-20;
    y=center_y-15;
}
void Rect::Draw()
{
    scene->clear();
    QBrush Rbrush(Qt::black);
    QPen Rpen(Qt::black);
    Rpen.setWidth(2);
    rectangle=scene->addRect(x,y,40,30,Rpen,Rbrush);

    ver=scene->addLine(0,-250,0,250,Qt::NoPen);
    hor=scene->addLine(-200,0,200,0,Qt::NoPen);
}
