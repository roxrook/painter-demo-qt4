#include "PaintArea.h"
#include <QApplication>
#include <QPainter>
#include <QDebug>
#include <cmath>

Canvas::Canvas(QWidget *parent) : QWidget(parent) {

}

void Canvas::paintEvent(QPaintEvent *event) {
    QPen pen(Qt::black, 2, Qt::SolidLine);
    QPainter painter(this);
    painter.setPen(pen);

    painter.drawRect(currentShape.getX(), currentShape.getY(), currentShape.getWidth(), currentShape.getHeight());
    for (int i = 0, size = shapes.size(); i < size; ++i) {
        painter.drawRect(shapes[i].getX(), shapes[i].getY(), shapes[i].getWidth(), shapes[i].getHeight());
    }
}

void Canvas::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        qDebug() << "Click event occurs at: " << (event->pos()).x() << "," << (event->pos()).y() << "\n";
        currentShape.setX((event->pos()).x());
        currentShape.setY((event->pos()).y());
        currentShape.setWidth(0);
        currentShape.setHeight(0);
        repaint();
    }
}

void Canvas::mouseMouseEvent(QMouseEvent *event) {
    currentShape.setWidth(abs((event->pos()).x() - currentShape.getX()));
    currentShape.setHeight(abs((event->pos()).y() - currentShape.getY()));
    repaint();
}

void Canvas::mouseReleaseEvent(QMouseEvent *event) {
    currentShape.setWidth(abs((event->pos()).x() - currentShape.getX()));
    currentShape.setHeight(abs((event->pos()).y() - currentShape.getY()));
    shapes.push_back(currentShape);
    repaint();
}
