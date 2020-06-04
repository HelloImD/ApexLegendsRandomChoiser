#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(372, 233);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int randomBetween(int low, int high)
{
    return (qrand() % ((high + 1) - low) + low);
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->clear();
    QStringList legends = {};
    if(ui->checkBox->isChecked()){
        legends << "Bangalore";
    }
    if(ui->checkBox_2->isChecked()){
        legends << "Bloodhound";
    }
    if(ui->checkBox_3->isChecked()){
        legends << "Wattson";
    }
    if(ui->checkBox_4->isChecked()){
        legends << "Gibraltar";
    }
    if(ui->checkBox_5->isChecked()){
        legends << "Caustic";
    }
    if(ui->checkBox_6->isChecked()){
        legends << "Crypto";
    }
    if(ui->checkBox_7->isChecked()){
        legends << "Lifeline";
    }
    if(ui->checkBox_8->isChecked()){
        legends << "Loba";
    }
    if(ui->checkBox_9->isChecked()){
        legends << "Mirage";
    }
    if(ui->checkBox_10->isChecked()){
        legends << "Octain";
    }
    if(ui->checkBox_11->isChecked()){
        legends << "Pathfinder";
    }
    if(ui->checkBox_12->isChecked()){
        legends << "Revenant";
    }
    if(ui->checkBox_13->isChecked()){
        legends << "Wraith";
    }
    int index = randomBetween(0, legends.length()-1);
    ui->label->setText(legends[index]);
    index = 0;
}
