#include "tri.h"

Tri::Tri(QGraphicsScene *_scene):Shape(_scene)
{

    center_x=-150;
    center_y=0;

    x1=center_x-30;
    y1=center_y+17;
    x2=center_x+30;
    y2=center_y+17;
    x3=center_x;
    y3=center_y-34;
}
void Tri::move_up()
{
    center_y-=5;

    x1=center_x-30;
    y1=center_y+17;
    x2=center_x+30;
    y2=center_y+17;
    x3=center_x;
    y3=center_y-34;
}
void Tri::move_down()
{
    center_y+=5;

    x1=center_x-30;
    y1=center_y+17;
    x2=center_x+30;
    y2=center_y+17;
    x3=center_x;
    y3=center_y-34;
}
void Tri::move_right()
{
    center_x+=5;

    x1=center_x-30;
    y1=center_y+17;
    x2=center_x+30;
    y2=center_y+17;
    x3=center_x;
    y3=center_y-34;
}
void Tri::move_left()
{
    center_x-=5;

    x1=center_x-30;
    y1=center_y+17;
    x2=center_x+30;
    y2=center_y+17;
    x3=center_x;
    y3=center_y-34;
}
int t_deg=0;
int t_count=0;
void Tri::rotate_cw()
{
    t_count++;
    QPolygonF tri_coor;
    tri_coor.append(QPointF(x1,y1));
    tri_coor.append(QPointF(x2,y2));
    tri_coor.append(QPointF(x3,y3));
    tri_coor.append(QPointF(x1,y1));
    if(t_count>0)
    {
        scene->clear();
        t_deg++;
        QBrush Tbrush(Qt::black);
        QPen Tpen(Qt::black);
        Tpen.setWidth(2);
        triangle=scene->addPolygon(tri_coor,Tpen,Tbrush);
        triangle->setTransformOriginPoint(center_x,center_y);
        triangle->setRotation(t_deg);
        triangle->show();
    }

}
void Tri::rotate_ccw()
{
    t_count=0;
    t_count++;
    QPolygonF tri_coor;
    tri_coor.append(QPointF(x1,y1));
    tri_coor.append(QPointF(x2,y2));
    tri_coor.append(QPointF(x3,y3));
    tri_coor.append(QPointF(x1,y1));
    if(t_count>0)
    {
        scene->clear();
        t_deg--;
        QBrush Tbrush(Qt::black);
        QPen Tpen(Qt::black);
        Tpen.setWidth(2);
        triangle=scene->addPolygon(tri_coor,Tpen,Tbrush);
        triangle->setTransformOriginPoint(center_x,center_y);
        triangle->setRotation(t_deg);
        triangle->show();
    }
}
void Tri::rotate_stop()
{
    x1=center_x-30;
    y1=center_y+17;
    x2=center_x+30;
    y2=center_y+17;
    x3=center_x;
    y3=center_y-34;
}
void Tri::Draw()
{
    scene->clear();
    QPolygonF tri_coor;
    tri_coor.append(QPointF(x1,y1));
    tri_coor.append(QPointF(x2,y2));
    tri_coor.append(QPointF(x3,y3));
    tri_coor.append(QPointF(x1,y1));
    QBrush Tbrush(Qt::black);
    QPen Tpen(Qt::black);
    Tpen.setWidth(2);
    triangle=scene->addPolygon(tri_coor,Tpen,Tbrush);

    ver=scene->addLine(0,-250,0,250,Qt::NoPen);
    hor=scene->addLine(-200,0,200,0,Qt::NoPen);
}
