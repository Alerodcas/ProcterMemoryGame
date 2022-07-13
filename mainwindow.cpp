#include <stdlib.h>
#include <unistd.h>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Card.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_2->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_3->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_4->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_5->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_6->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_7->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_8->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_9->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_10->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_11->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_12->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_13->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_14->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_15->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_16->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_17->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_18->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_19->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_20->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_21->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_22->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_23->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_24->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_25->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_26->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_27->setIcon(QIcon("://Images/Icon.png"));
    ui->pushButton_28->setIcon(QIcon("://Images/Icon.png"));
    ui->playingTeamLabel->setText("Equipo 1");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showCard(int cardNum){
    if(this->OnlyTwoCards){
        Card card = this->game.getCard(cardNum);
        std::string cardType = card.getType();
        if (cardType == "One"){
            this->justPressed->setIcon(QIcon("://Images/image 1.png"));
        }else if (cardType == "Two"){
            this->justPressed->setIcon(QIcon("://Images/image 2.png"));
        }else if (cardType == "Three"){
            this->justPressed->setIcon(QIcon("://Images/image 3.png"));
        }else if (cardType == "Four"){
            this->justPressed->setIcon(QIcon("://Images/image 4.png"));
        }else if (cardType == "Five"){
            this->justPressed->setIcon(QIcon("://Images/image 5.png"));
        }else if (cardType == "Six"){
            this->justPressed->setIcon(QIcon("://Images/image 6.png"));
        }else if (cardType == "Seven"){
            this->justPressed->setIcon(QIcon("://Images/image 7.png"));
        }else if (cardType == "Eight"){
            this->justPressed->setIcon(QIcon("://Images/image 8.png"));
        }else if (cardType == "Nine"){
            this->justPressed->setIcon(QIcon("://Images/image 9.png"));
        }else if (cardType == "Ten"){
            this->justPressed->setIcon(QIcon("://Images/image 10.png"));
        }else if (cardType == "Eleven"){
            this->justPressed->setIcon(QIcon("://Images/image 11.png"));
        }else if (cardType == "Twelve"){
            this->justPressed->setIcon(QIcon("://Images/image 12.png"));
        }else if (cardType == "Thirteen"){
            this->justPressed->setIcon(QIcon("://Images/image 13.png"));
        }else if (cardType == "Fourteen"){
            this->justPressed->setIcon(QIcon("://Images/image 14.png"));
        }
        if(this->firstPressed == this->ghost){
            this->firstPressed = this->justPressed;
            this->firstCard = card;
        }else if(this->secondPressed == this->ghost){
            this->secondPressed = this->justPressed;
            this->OnlyTwoCards = false;
            this->secondCard = card;
        }
    }
}

void MainWindow::evaluateCards(){
    if(this->game.compareCards(this->firstCard, this->secondCard)){
        this->playingTeam->givePoints();
        this->playingTeam->addTurns();
        this->firstPressed->setEnabled(false);
        this->secondPressed->setEnabled(false);
    }else{
        this->firstPressed->setIcon(QIcon("://Images/Icon.png"));
        this->secondPressed->setIcon(QIcon("://Images/Icon.png"));
        changeTeam();
    }
    this->firstPressed = this->ghost;
    this->secondPressed = this->ghost;
    this->OnlyTwoCards = true;
    ui->PointsLabel_1->setText(QString::number(this->teamOne.getPoints()));
    ui->PointsLabel_2->setText(QString::number(this->teamTwo.getPoints()));
    ui->PointsLabel_3->setText(QString::number(this->teamThree.getPoints()));
    ui->PointsLabel_4->setText(QString::number(this->teamFour.getPoints()));
}

void MainWindow::changeTeam(){
    this->playingTeam->resetTurns();
    if (this->playingTeam == &teamOne){;
        this->playingTeam = &teamTwo;
        ui->playingTeamLabel->setText("Equipo 2");
    }else if (this->playingTeam == &teamTwo){
        this->playingTeam = &teamThree;
        ui->playingTeamLabel->setText("Equipo 3");
    }else if (this->playingTeam == &teamThree){
        this->playingTeam = &teamFour;
        ui->playingTeamLabel->setText("Equipo 4");
    }else if (this->playingTeam == &teamFour){
        this->playingTeam = &teamOne;
        ui->playingTeamLabel->setText("Equipo 1");
    }
}

void MainWindow::on_pushButton_clicked()
{
    this->justPressed = ui->pushButton;
    showCard(1);
}


void MainWindow::on_pushButton_2_clicked()
{
    this->justPressed = ui->pushButton_2;
    showCard(2);
}


void MainWindow::on_pushButton_3_clicked()
{
    this->justPressed = ui->pushButton_3;
    showCard(3);
}


void MainWindow::on_pushButton_4_clicked()
{
    this->justPressed = ui->pushButton_4;
    showCard(4);
}


void MainWindow::on_pushButton_5_clicked()
{
    this->justPressed = ui->pushButton_5;
    showCard(5);
}


void MainWindow::on_pushButton_6_clicked()
{
    this->justPressed = ui->pushButton_6;
    showCard(6);
}


void MainWindow::on_pushButton_7_clicked()
{
    this->justPressed = ui->pushButton_7;
    showCard(7);
}


void MainWindow::on_pushButton_8_clicked()
{
    this->justPressed = ui->pushButton_8;
    showCard(8);
}


void MainWindow::on_pushButton_9_clicked()
{
    this->justPressed = ui->pushButton_9;
    showCard(9);
}


void MainWindow::on_pushButton_10_clicked()
{
    this->justPressed = ui->pushButton_10;
    showCard(10);
}


void MainWindow::on_pushButton_11_clicked()
{
    this->justPressed = ui->pushButton_11;
    showCard(11);
}


void MainWindow::on_pushButton_12_clicked()
{
    this->justPressed = ui->pushButton_12;
    showCard(12);
}


void MainWindow::on_pushButton_13_clicked()
{
    this->justPressed = ui->pushButton_13;
    showCard(13);
}


void MainWindow::on_pushButton_14_clicked()
{
    this->justPressed = ui->pushButton_14;
    showCard(14);
}


void MainWindow::on_pushButton_15_clicked()
{
    this->justPressed = ui->pushButton_15;
    showCard(15);
}


void MainWindow::on_pushButton_16_clicked()
{
    this->justPressed = ui->pushButton_16;
    showCard(16);
}


void MainWindow::on_pushButton_17_clicked()
{
    this->justPressed = ui->pushButton_17;
    showCard(17);
}


void MainWindow::on_pushButton_18_clicked()
{
    this->justPressed = ui->pushButton_18;
    showCard(18);
}


void MainWindow::on_pushButton_19_clicked()
{
    this->justPressed = ui->pushButton_19;
    showCard(19);
}


void MainWindow::on_pushButton_20_clicked()
{
    this->justPressed = ui->pushButton_20;
    showCard(20);
}


void MainWindow::on_pushButton_21_clicked()
{
    this->justPressed = ui->pushButton_21;
    showCard(21);
}


void MainWindow::on_pushButton_22_clicked()
{
    this->justPressed = ui->pushButton_22;
    showCard(22);
}


void MainWindow::on_pushButton_23_clicked()
{
    this->justPressed = ui->pushButton_23;
    showCard(23);
}


void MainWindow::on_pushButton_24_clicked()
{
    this->justPressed = ui->pushButton_24;
    showCard(24);
}


void MainWindow::on_pushButton_25_clicked()
{
    this->justPressed = ui->pushButton_25;
    showCard(25);
}


void MainWindow::on_pushButton_26_clicked()
{
    this->justPressed = ui->pushButton_26;
    showCard(26);
}


void MainWindow::on_pushButton_27_clicked()
{
    this->justPressed = ui->pushButton_27;
    showCard(27);
}


void MainWindow::on_pushButton_28_clicked()
{
    this->justPressed = ui->pushButton_28;
    showCard(28);
}


void MainWindow::on_pushButton_29_clicked()
{
    if(!this->OnlyTwoCards) {
        evaluateCards();
    }
}

