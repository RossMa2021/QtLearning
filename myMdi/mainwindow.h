#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class MdiChild;
class QMdiSubWindow;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();
    void updateMenus();           //更新菜单
    void setActiveSubWindow(QWidget *window); // 设置活动子窗口


    void on_actionOpen_triggered();

private:
    Ui::MainWindow *ui;
    QAction *actionSeparator;    //分隔符
    //此处需要使用前置声明，才能不报错
    MdiChild *activeMdiChild(); //活动窗口
    MdiChild *createMdiChild(); //创建子窗口
    QMdiSubWindow *findMdiChild(const QString &fileName); // 查找子窗口
};

#endif // MAINWINDOW_H
