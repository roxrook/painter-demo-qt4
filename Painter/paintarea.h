#ifndef PAINTAREA_H
#define PAINTAREA_H

#include <QWidget>
#include <QMouseEvent>
#include <QPoint>

#include <vector>
#include "rectangle.h"

using std::vector;

class Canvas : public QWidget {
    Q_OBJECT

private:
    vector<Rectangle> shapes;
    Rectangle currentShape;
    QPoint start;
    QPoint end;
public:
    Canvas(QWidget *parent = 0);

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMouseEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *);
    void resizeEvent(QPaintEvent *event);
    void paintEvent(QPaintEvent *event);

public:
    void drawRectangleAt(const QPoint& point);
};

#endif // PAINTAREA_H
