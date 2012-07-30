#include "rectangle.h"

Rectangle::Rectangle(int x, int y, int width, int height)
    : x(x), y(y), width(width), height(height) {
}

int Rectangle::getX() const {
    return x;
}

int Rectangle::getY() const {
    return y;
}

int Rectangle::getWidth() const {
    return width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setX(int x) {
    this->x = x;
}

void Rectangle::setY(int y) {
    this->y = y;
}

void Rectangle::setWidth(int w) {
    width = w;
}

void Rectangle::setHeight(int h) {
    height = h;
}
