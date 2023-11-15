#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <fstream>
#include <string>
#include <vector>
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE 

struct myBool{

    bool program_Initiated = false;
    bool sortingStarted = false;
    bool isShuffled = false;
};

class Sleeper : public QThread
{
public:
    static void usleep(unsigned long usecs){QThread::usleep(usecs);}
    static void msleep(unsigned long msecs){QThread::msleep(msecs);}
    static void sleep(unsigned long secs){QThread::sleep(secs);}
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void CreatePictureArray();
    void drawField();
    void createObjectArray();
    void selectionSort();
    void bubbleSort();
    void shuffleVector();

private slots:

    void on_actionStart_triggered();

    void on_Selection_Sort_clicked();

    void on_Bubble_Sort_clicked();


    void on_Shuffle_clicked();

    void on_Snabbt_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
