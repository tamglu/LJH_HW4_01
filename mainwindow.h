#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include<QTimer>
#include "rect.h"
#include "cir.h"
#include "tri.h"
#include <QDebug>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Draw_tri_clicked();

    void DoTimerCB();
    void on_tri_up_clicked();

    void on_tri_down_clicked();

    void on_tri_right_clicked();

    void on_tri_left_clicked();

    void on_tri_ro_clicked();

    void on_Draw_rect_clicked();

    void on_rect_up_clicked();

    void on_rect_left_clicked();

    void on_rect_right_clicked();

    void on_rect_down_clicked();

    void on_rect_ro_clicked();

    void on_Draw_cir_clicked();

    void on_cir_up_clicked();

    void on_cir_right_clicked();

    void on_cir_left_clicked();

    void on_cir_down_clicked();

    void on_cir_ro_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene  *scene;
    Tri *tria;
    Rect *rec;
    Cir *circ;
    QTimer *m_Timer;

};
#endif // MAINWINDOW_H
