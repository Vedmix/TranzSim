
#include <QMainWindow>
#include <QPushButton>
#include <QApplication>
#include <QWidget>
#include <QIcon>
#include <QMenu>
#include <QMenuBar>
#include <QList>
#include <QVBoxLayout>
#include <QLabel>
#include <QHBoxLayout>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    void initMenu();
    void initCentralWidget();
    void initProjectBar();
    void initEditor();

    ~MainWindow();
private:
    QWidget *centralWidget;
    QWidget *projectWidget;
    QWidget *editorWidget;

    QHBoxLayout *mainLayout;
};
