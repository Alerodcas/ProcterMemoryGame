//
// Created by alero on 28-Jun-22.
//

#include "Game.h"
#include <string>
#include <vector>

Card cardMatrix[4][7];

Game::Game() {
    Game::createBoard();
}

Game::~Game() {
}

void Game::createBoard(){
    int maxType1 = 2;
    int maxType2 = 2;
    int maxType3 = 2;
    int maxType4 = 2;
    int maxType5 = 2;
    int maxType6 = 2;
    int maxType7 = 2;
    int maxType8 = 2;
    int maxType9 = 2;
    int maxType10 = 2;
    int maxType11 = 2;
    int maxType12 = 2;
    int maxType13 = 2;
    int maxType14 = 2;
    int total = 28;
    std::vector<std::string> board;
    srand(time(NULL));
    std::vector<int> types = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 7; j++){
            while (total > 0) {
                int randomType = types[rand() % types.size()];
                if (randomType == 1 and maxType1 > 0) {
                    cardMatrix[i][j].setType("One");
                    maxType1 -= 1;
                    total -= 1;
                    break;
                }
                else if (randomType == 2 and maxType2 > 0) {
                    cardMatrix[i][j].setType("Two");
                    maxType2 -= 1;
                    total -= 1;
                    break;
                }
                else if (randomType == 3 and maxType3 > 0) {
                    cardMatrix[i][j].setType("Three");
                    maxType3 -= 1;
                    total -= 1;
                    break;
                }
                else if (randomType == 4 and maxType4 > 0) {
                    cardMatrix[i][j].setType("Four");
                    maxType4 -= 1;
                    total -= 1;
                    break;
                }
                else if (randomType == 5 and maxType5 > 0) {
                    cardMatrix[i][j].setType("Five");
                    maxType5 -= 1;
                    total -= 1;
                    break;
                }
                else if (randomType == 6 and maxType6 > 0) {
                    cardMatrix[i][j].setType("Six");
                    maxType6 -= 1;
                    total -= 1;
                    break;
                }
                else if (randomType == 7 and maxType7 > 0) {
                    cardMatrix[i][j].setType("Seven");
                    maxType7 -= 1;
                    total -= 1;
                    break;
                }
                else if (randomType == 8 and maxType8 > 0) {
                    cardMatrix[i][j].setType("Eight");
                    maxType8 -= 1;
                    total -= 1;
                    break;
                }
                else if (randomType == 9 and maxType9 > 0) {
                    cardMatrix[i][j].setType("Nine");
                    maxType9 -= 1;
                    total -= 1;
                    break;
                }
                else if (randomType == 10 and maxType10 > 0) {
                    cardMatrix[i][j].setType("Ten");
                    maxType10 -= 1;
                    total -= 1;
                    break;
                }
                else if (randomType == 11 and maxType11 > 0) {
                    cardMatrix[i][j].setType("Eleven");
                    maxType11 -= 1;
                    total -= 1;
                    break;
                }
                else if (randomType == 12 and maxType12 > 0) {
                    cardMatrix[i][j].setType("Twelve");
                    maxType12 -= 1;
                    total -= 1;
                    break;
                }
                else if (randomType == 13 and maxType13 > 0) {
                    cardMatrix[i][j].setType("Thirteen");
                    maxType13 -= 1;
                    total -= 1;
                    break;
                }
                else if (randomType == 14 and maxType14 > 0) {
                    cardMatrix[i][j].setType("Fourteen");
                    maxType13 -= 1;
                    total -= 1;
                    break;
                }
                else{
                    continue;
                }
            }
        }
    }
}

Card Game::getCard(int cardNumber) {
    int count = 0;
    cardNumber -= 1;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 7; j++) {
            if(cardNumber == count){
                return cardMatrix[i][j];
            }else{
                count+=1;
            }
            }
        }
}

bool Game::compareCards(Card card1, Card card2){
    if(card1.getType() == card2.getType()){
        return true;
    }else{
        return false;
    }
}


