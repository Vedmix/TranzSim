
#include <QMainWindow>
#include <QPushButton>
#include <QApplication>
#include <QWidget>
#include <QIcon>
#include <QMenu>
#include <QMenuBar>
#include <QList>
#include <algorithm>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};
