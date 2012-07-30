#include "PaintArea.h"
#include <QDesktopWidget>
#include <QApplication>

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    Canvas myPaint;
    myPaint.setWindowTitle("My Drawing");
    myPaint.show();
    return app.exec();
}
