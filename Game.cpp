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
    int maxTypeA = 5;
    int maxTypeB = 5;
    int maxTypeC = 5;
    int maxTypeD = 5;
    int maxTypeE = 10;
    int total = 28;
    std::vector<std::string> board;
    srand(time(NULL));
    std::vector<std::string> types = {"TipoA", "TipoB", "TipoC", "TipoD", "TipoE"};
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 7; j++){
            while (total > 0) {
                std::string randomType = types[rand() % types.size()];
                if (randomType == "TipoA" and maxTypeA > 0) {
                    cardMatrix[i][j].setType("TipoA");
                    maxTypeA -= 1;
                    total -= 1;
                    break;
                }
                else if (randomType == "TipoB" and maxTypeB > 0) {
                    cardMatrix[i][j].setType("TipoB");
                    maxTypeB -= 1;
                    total -= 1;
                    break;
                }
                else if (randomType == "TipoC" and maxTypeC > 0) {
                    cardMatrix[i][j].setType("TipoC");
                    maxTypeC -= 1;
                    total -= 1;
                    break;
                }
                else if (randomType == "TipoD" and maxTypeD > 0) {
                    cardMatrix[i][j].setType("TipoD");
                    maxTypeD -= 1;
                    total -= 1;
                    break;
                }
                else if (randomType == "TipoE" and maxTypeE > 0) {
                    cardMatrix[i][j].setType("TipoE");
                    maxTypeE -= 1;
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

int Game::compareCards(Card card1, Card card2){
    if(card1.getType() == card2.getType()){
        return card1.getPoints();
    }else{
        return 0;
    }
}


