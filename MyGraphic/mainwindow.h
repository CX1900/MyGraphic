#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //void setLine(Line l);
   // void keyPressEvent(QKeyEvent *);

protected:
    void paintEvent(QPaintEvent *);

private:
    Ui::MainWindow *ui;
    Line line;
};

#endif // MAINWINDOW_H
