#include "widget.h"
#include "statement.h"
#include "list.h"
#include <QApplication>
#include <iostream>
#include <list>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
