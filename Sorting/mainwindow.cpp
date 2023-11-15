#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTimer>
#include <QEventLoop>

std::vector<std::string> picVector;
std::vector<std::pair<int,std::string>> objects;
myBool myBools;
int speed = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::CreatePictureArray()
{
    std::ifstream stream("C:/QTprojects/Sorting/TextFile/ImageAdress.txt");
    while(!stream.fail()){

        std::string temp;
        stream >> temp;
        if(!stream.fail())
            picVector.push_back(temp);
    }
}

void MainWindow::createObjectArray()
{
    int i = 0;
    for (auto it = picVector.begin(); it!= picVector.end(); it++){
        std::pair<int,std::string> temp;
        temp.first = i;
        temp.second = *it;
        objects.push_back(temp);
        i +=1;
    }
}

void MainWindow::selectionSort()
{
    int smallest = 0;
    for(int i = 0; i < 48; i++){

        smallest = i;
        for(int j = i; j < 48; j++){

            if(objects[j].first < objects[smallest].first)
                smallest = j;
        }
        swap(objects[i], objects[smallest]);
        QEventLoop loop;
        QTimer::singleShot(speed,&loop,SLOT(quit()));
        loop.exec();
        drawField();
    }
}

void MainWindow::bubbleSort()
{
    for(int i = 0; i < 47; i++){
        for(int j = 0; j <47-i; j++){
            if(objects[j] > objects[j+1])
                swap(objects[j], objects[j+1]);
            QEventLoop loop;
            QTimer::singleShot(speed,&loop,SLOT(quit()));
            loop.exec();
            drawField();
        }
    }
}

void MainWindow::shuffleVector()
{
    std::random_shuffle(objects.begin(), objects.end());
}

void MainWindow::drawField()
{
    QPixmap map0 (objects[0].second.data());
    ui->label_0->setPixmap(map0);
    QPixmap map1 (objects[1].second.data());
    ui->label_1->setPixmap(map1);
    QPixmap map2 (objects[2].second.data());
    ui->label_2->setPixmap(map2);
    QPixmap map3 (objects[3].second.data());
    ui->label_3->setPixmap(map3);
    QPixmap map4 (objects[4].second.data());
    ui->label_4->setPixmap(map4);
    QPixmap map5 (objects[5].second.data());
    ui->label_5->setPixmap(map5);
    QPixmap map6 (objects[6].second.data());
    ui->label_6->setPixmap(map6);
    QPixmap map7 (objects[7].second.data());
    ui->label_7->setPixmap(map7);
    QPixmap map8 (objects[8].second.data());
    ui->label_8->setPixmap(map8);
    QPixmap map9 (objects[9].second.data());
    ui->label_9->setPixmap(map9);
    QPixmap map10 (objects[10].second.data());
    ui->label_10->setPixmap(map10);
    QPixmap map11 (objects[11].second.data());
    ui->label_11->setPixmap(map11);
    QPixmap map12 (objects[12].second.data());
    ui->label_12->setPixmap(map12);
    QPixmap map13 (objects[13].second.data());
    ui->label_13->setPixmap(map13);
    QPixmap map14 (objects[14].second.data());
    ui->label_14->setPixmap(map14);
    QPixmap map15 (objects[15].second.data());
    ui->label_15->setPixmap(map15);
    QPixmap map16 (objects[16].second.data());
    ui->label_16->setPixmap(map16);
    QPixmap map17 (objects[17].second.data());
    ui->label_17->setPixmap(map17);
    QPixmap map18 (objects[18].second.data());
    ui->label_18->setPixmap(map18);
    QPixmap map19 (objects[19].second.data());
    ui->label_19->setPixmap(map19);
    QPixmap map20 (objects[20].second.data());
    ui->label_20->setPixmap(map20);
    QPixmap map21 (objects[21].second.data());
    ui->label_21->setPixmap(map21);
    QPixmap map22 (objects[22].second.data());
    ui->label_22->setPixmap(map22);
    QPixmap map23 (objects[23].second.data());
    ui->label_23->setPixmap(map23);
    QPixmap map24 (objects[24].second.data());
    ui->label_24->setPixmap(map24);
    QPixmap map25 (objects[25].second.data());
    ui->label_25->setPixmap(map25);
    QPixmap map26 (objects[26].second.data());
    ui->label_26->setPixmap(map26);
    QPixmap map27 (objects[27].second.data());
    ui->label_27->setPixmap(map27);
    QPixmap map28 (objects[28].second.data());
    ui->label_28->setPixmap(map28);
    QPixmap map29 (objects[29].second.data());
    ui->label_29->setPixmap(map29);
    QPixmap map30 (objects[30].second.data());
    ui->label_30->setPixmap(map30);
    QPixmap map31 (objects[31].second.data());
    ui->label_31->setPixmap(map31);
    QPixmap map32 (objects[32].second.data());
    ui->label_32->setPixmap(map32);
    QPixmap map33 (objects[33].second.data());
    ui->label_33->setPixmap(map33);
    QPixmap map34 (objects[34].second.data());
    ui->label_34->setPixmap(map34);
    QPixmap map35 (objects[35].second.data());
    ui->label_35->setPixmap(map35);
    QPixmap map36 (objects[36].second.data());
    ui->label_36->setPixmap(map36);
    QPixmap map37 (objects[37].second.data());
    ui->label_37->setPixmap(map37);
    QPixmap map38 (objects[38].second.data());
    ui->label_38->setPixmap(map38);
    QPixmap map39 (objects[39].second.data());
    ui->label_39->setPixmap(map39);
    QPixmap map40 (objects[40].second.data());
    ui->label_40->setPixmap(map40);
    QPixmap map41 (objects[41].second.data());
    ui->label_41->setPixmap(map41);
    QPixmap map42 (objects[42].second.data());
    ui->label_42->setPixmap(map42);
    QPixmap map43 (objects[43].second.data());
    ui->label_43->setPixmap(map43);
    QPixmap map44 (objects[44].second.data());
    ui->label_44->setPixmap(map44);
    QPixmap map45 (objects[45].second.data());
    ui->label_45->setPixmap(map45);
    QPixmap map46 (objects[46].second.data());
    ui->label_46->setPixmap(map46);
    QPixmap map47 (objects[47].second.data());
    ui->label_47->setPixmap(map47);

}

void MainWindow::on_actionStart_triggered()
{
    if(myBools.program_Initiated)
        return;
    CreatePictureArray();
    createObjectArray();
    myBools.program_Initiated = true;
    drawField();
}

void MainWindow::on_Selection_Sort_clicked()
{
    if(!myBools.program_Initiated || myBools.sortingStarted || !myBools.isShuffled)
        return;

    myBools.sortingStarted = true;
    selectionSort();
    drawField();
    myBools.sortingStarted = false;
    myBools.isShuffled = false;
}

void MainWindow::on_Bubble_Sort_clicked()
{
    if(!myBools.program_Initiated || myBools.sortingStarted || !myBools.isShuffled)
        return;

    myBools.sortingStarted = true;
    bubbleSort();
    drawField();
    myBools.sortingStarted = false;
    myBools.isShuffled = false;
}

void MainWindow::on_Shuffle_clicked()
{
    if(!myBools.program_Initiated || myBools.sortingStarted)
        return;

    ui->horizontalSlider->setValue(100);
    speed = 100;
    shuffleVector();
    drawField();
    myBools.isShuffled = true;
}

void MainWindow::on_Snabbt_clicked()
{
    if(!myBools.program_Initiated || !myBools.isShuffled)
        return;
    speed = 0;
    drawField();
    myBools.sortingStarted = false;
    myBools.isShuffled = false;
    ui->horizontalSlider->setValue(100);
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    if (value > 100)
        speed = 100 - (value - 100);
    if(value < 100)
        speed = 100 + (100 - value);
}
