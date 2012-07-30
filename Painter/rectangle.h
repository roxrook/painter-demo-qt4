#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
    int x;
    int y;
    int width;
    int height;

public:
    Rectangle(int x = 0, int y = 0, int width = 0, int height = 0);

public:
    int getX() const;
    int getY() const;
    int getWidth() const;
    int getHeight() const;

    void setX(int x);
    void setY(int y);
    void setWidth(int w);
    void setHeight(int h);
};

#endif // RECTANGLE_H
