#include "mainwindow.hpp"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
{
    this->setWindowTitle("TranzSim");
    this->resize(1920, 1080);
    this->setWindowIcon(QIcon("icon.png"));

}

MainWindow::~MainWindow() {}
