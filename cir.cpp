#include "cir.h"

Cir::Cir(QGraphicsScene *_scene):Shape(_scene)
{
    center_x=150;
    center_y=0;
    x=center_x+20;
    y=center_y-20;
}
void Cir::move_up()
{
    center_y-=5;
    x=center_x+20;
    y=center_y-20;
}
void Cir::move_down()
{
    center_y+=5;
    x=center_x+20;
    y=center_y-20;
}
void Cir::move_right()
{
    center_x+=5;
    x=center_x+20;
    y=center_y-20;
}
void Cir::move_left()
{
    center_x-=5;
    x=center_x+20;
    y=center_y-20;
}
int c_ro=0;
int c_deg=0;
void Cir::rotate_cw()
{
    c_ro=1;
    c_deg++;
    double radian=c_deg*PI/180;
    ro_x=20*cos(radian)+center_x;
    ro_y=20*sin(radian)+center_y;

}
void Cir::rotate_ccw()
{
    c_ro=1;
    c_deg--;
    double radian=c_deg*PI/180;
    ro_x=20*cos(radian)+center_x;
    ro_y=20*sin(radian)+center_y;
}
void Cir::rotate_stop()
{
    c_ro=0;
}
void Cir::Draw()
{
   scene->clear();
    QBrush Cbrush(Qt::black);
    QPen Cpen(Qt::black);
    Cpen.setWidth(2);
   circle=scene->addEllipse(center_x-20,center_y-20,40,40,Cpen,Cbrush);
    if(c_ro==1)
    {
        QBrush robrush(Qt::blue);
        QPen ropen(Qt::blue);
        ropen.setWidth(2);
        rotat=scene->addEllipse(ro_x-2,ro_y-2,4,4,ropen,robrush);
    }
    ver=scene->addLine(0,-250,0,250,Qt::NoPen);
    hor=scene->addLine(-200,0,200,0,Qt::NoPen);
}
