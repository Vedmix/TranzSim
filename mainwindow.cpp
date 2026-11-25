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
    QMenu *fileMenu = nullptr;
    QMenu *editMenu = nullptr;
    QMenu *optionsMenu = nullptr;

    QList<QString> menuNames = {"File","Edit","Options"};
    QList<QString> fileActionNames = {"New file", "New project", "Open file", "Open project", "Save", "Close file", "Close project", "Quit"};
    QList<QString> editActionNames = {"Redo", "Undo"};
    QList<QString> optionsActionNames = {"General", "Style"};

    for (const QString &name : menuNames){
        QMenu *menu = bar->addMenu(name);
        if (name == "File"){
            fileMenu = menu;
        } else if (name == "Edit"){
            editMenu = menu;
        } else if (name == "Options"){
            optionsMenu = menu;
        }
    }

    for (const QString &name : fileActionNames){
        QAction *action = new QAction(name, this);
        if (name == "Quit"){
            connect(action, &QAction::triggered, qApp, &QApplication::quit);
        }
        fileMenu->addAction(action);
    }

    for (const QString &name : editActionNames){
        QAction *action = new QAction(name, this);

        editMenu->addAction(action);
    }

    for (const QString &name : optionsActionNames){
        QAction *action = new QAction(name, this);

        optionsMenu->addAction(action);
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
