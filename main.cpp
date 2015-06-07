#include "widget.h"
#include <QApplication>
#include <mainwindow.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Widget w;
   // w.show();
    MainWindow mainWindow;
    mainWindow.show();

    return a.exec();
}
