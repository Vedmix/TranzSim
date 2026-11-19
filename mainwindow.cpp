#include "mainwindow.hpp"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
{
    this->setWindowTitle("TranzSim");
    this->resize(1920, 1080);
    this->setWindowIcon(QIcon("icon.png"));

    QAction *quit = new QAction("Quit", this);

    QList<QString> menuNames = {"File","Edit", "Viev", "Options"};

    for (int i=0; i < menuNames.size(); ++i){
        QMenu *menuObject;
        menuObject = menuBar()->addMenu(menuNames[i]);
        switch(i){
        case(0):
            menuObject->addAction(quit);
            connect(quit, &QAction::triggered, qApp, QApplication::quit);
            break;
        }
    }

}

MainWindow::~MainWindow() {}
