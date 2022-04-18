#include "mainwindow.h"
#include <QApplication>
#include <qDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    qDebug("hello world,qt...............");
    qDebug("hello world,qt...%d,%s",100, "nihaomammm");
    qDebug() << "hello world,qt...............cppp" <<3.1415926<< endl;

    return a.exec();
}
