#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene=new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    m_Timer=new QTimer(parent);
    connect(m_Timer,SIGNAL(timeout()),this,SLOT(DoTimerCB()));
    m_Timer->start(40);

    tria=new Tri(scene);
    rec=new Rect(scene);
    circ=new Cir(scene);

}

MainWindow::~MainWindow()
{
    delete ui;
}
int t_move_check=0;
void MainWindow::on_Draw_tri_clicked()
{
    tria->Draw();
    t_move_check++;
}

void MainWindow::on_tri_up_clicked()
{
    if(t_move_check>0)
    {
        tria->move_up();
        tria->Draw();
    }
}


void MainWindow::on_tri_down_clicked()
{
    if(t_move_check>0)
    {
        tria->move_down();
        tria->Draw();
    }
}


void MainWindow::on_tri_right_clicked()
{
    if(t_move_check>0)
    {
        tria->move_right();
        tria->Draw();
    }
}


void MainWindow::on_tri_left_clicked()
{
    if(t_move_check>0)
    {
        tria->move_left();
        tria->Draw();
    }
}

int tri_t=0;
int t_timer_check=0;
void MainWindow::on_tri_ro_clicked()
{
    if(t_move_check>0)
    {
        tri_t++;
        t_timer_check++;
        if(tri_t==3)
        {
            tri_t=0;
        }
    }
}
int r_move_check=0;
void MainWindow::on_Draw_rect_clicked()
{
    rec->Draw();
    r_move_check++;
}


void MainWindow::on_rect_up_clicked()
{
    if(r_move_check>0)
    {
        rec->move_up();
        rec->Draw();
    }
}


void MainWindow::on_rect_left_clicked()
{
    if(r_move_check>0)
    {
        rec->move_left();
        rec->Draw();
    }
}


void MainWindow::on_rect_right_clicked()
{
    if(r_move_check>0)
    {
        rec->move_right();
        rec->Draw();
    }
}


void MainWindow::on_rect_down_clicked()
{
    if(r_move_check>0)
    {
        rec->move_down();
        rec->Draw();
    }
}
int tri_r=0;
int r_timer_check=0;

void MainWindow::on_rect_ro_clicked()
{
    if(r_move_check>0)
    {
        tri_r++;
        r_timer_check++;
        if(tri_r==3)
        {
            tri_r=0;
        }
    }
}
int c_move_check=0;
void MainWindow::on_Draw_cir_clicked()
{
    circ->Draw();
    c_move_check++;
}

void MainWindow::on_cir_up_clicked()
{
    if(c_move_check>0)
    {
        circ->move_up();
        circ->Draw();
    }
}


void MainWindow::on_cir_right_clicked()
{
    if(c_move_check>0)
    {
        circ->move_right();
        circ->Draw();
    }
}


void MainWindow::on_cir_left_clicked()
{
    if(c_move_check>0)
    {
        circ->move_left();
        circ->Draw();
    }
}


void MainWindow::on_cir_down_clicked()
{
    if(c_move_check>0)
    {
        circ->move_down();
        circ->Draw();
    }
}

int tri_c=0;
int c_timer_check=0;
void MainWindow::on_cir_ro_clicked()
{
    if(c_move_check>0)
    {
        tri_c++;
        c_timer_check++;
        if(tri_c==3)
        {
            tri_c=0;
        }
    }
}

void MainWindow::DoTimerCB()
{
    if(t_timer_check>0)
    {
        if(tri_t==0)//stop
        {
            tria->rotate_stop();
            tria->Draw();
            t_timer_check=0;
        }
        else if(tri_t==1)//cw
        {
            tria->rotate_cw();
        }
        else if(tri_t==2)//ccw
        {
            tria->rotate_ccw();
        }
    }
    if(r_timer_check>0)
    {
        if(tri_r==0)//stop
        {
            rec->rotate_stop();
            rec->Draw();
            r_timer_check=0;
        }
        else if(tri_r==1)//cw
        {
            rec->rotate_cw();

        }
        else if(tri_r==2)//ccw
        {
            rec->rotate_ccw();
        }
    }
    if(c_timer_check>0)
    {
        if(tri_c==0)//stop
        {
            circ->rotate_stop();
            circ->Draw();
            c_timer_check=0;
        }
        else if(tri_c==1)//cw
        {
            circ->rotate_cw();
            circ->Draw();
        }
        else if(tri_c==2)//ccw
        {
            circ->rotate_ccw();
            circ->Draw();
        }
    }
}

