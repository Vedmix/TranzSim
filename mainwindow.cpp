#include "mainwindow.hpp"

MainWindow::MainWindow(QWidget* parent): QMainWindow(parent)
{
    setWindowTitle("TranzSim");
    resize(1920, 1080);
    setWindowIcon(QIcon("icon.png"));
    centralWidget = new QWidget(this);

    mainLayout = new QHBoxLayout(centralWidget);

    setCentralWidget(centralWidget);

    initMenu();
    initCentralWidget();
}

void MainWindow::initMenu(){

    QMenuBar *bar = menuBar();
    QAction *quit = new QAction("Quit", this);
    connect(quit, &QAction::triggered, qApp, QApplication::quit);

    QList<QString> menuNames = {"File","Edit", "View", "Options"};

    for (int i=0; i < menuNames.size(); ++i){
        QMenu *menuObject = bar->addMenu(menuNames[i]);
        switch(i){
        case(0):
            menuObject->addAction(quit);

            break;
        }
    }
}

void MainWindow::initCentralWidget(){
    initProjectBar();
    initEditor();

    mainLayout->addWidget(projectWidget, 1);
    mainLayout->addWidget(editorWidget, 4);
}

void MainWindow::initProjectBar(){
    projectWidget = new QWidget();
    projectWidget->setStyleSheet("background-color: #90EE90;");
    QVBoxLayout *projectLayout = new QVBoxLayout(projectWidget);

}

void MainWindow::initEditor(){
    editorWidget = new QWidget();
    editorWidget->setStyleSheet("background-color: #F08080;");
    QVBoxLayout *editorLayout = new QVBoxLayout(editorWidget);


}

MainWindow::~MainWindow() {}
