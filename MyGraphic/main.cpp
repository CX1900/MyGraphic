#include "mainwindow.h"
#include <QApplication>
#include"human.h"
#include"house.h"
#include"point.h"
#include"line.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.setLine(l);

    w.show();

    return a.exec();
}
