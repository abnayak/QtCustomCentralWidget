#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "widget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    Widget *widget = new Widget(this);
    ui->setupUi(this);

    //set the size of the window
    setFixedSize(600,450);


    // set black background
    QColor qColor(153, 204, 255);
    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, qColor);

    //set the central widget color
    ui->centralwidget->setAutoFillBackground(true);
    ui->centralwidget->setPalette(Pal);

    //set the widget color
    widget->setAutoFillBackground(true);
    widget->setPalette(Pal);
    widget->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    ui->gridLayout->addWidget(widget);
}

MainWindow::~MainWindow()
{
    delete ui;
}
