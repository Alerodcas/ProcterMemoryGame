//
// Created by alero on 28-Jun-22.
//

#ifndef PROCTERMEMORYGAME_GAME_H
#define PROCTERMEMORYGAME_GAME_H
#include "Card.h"

class Game {
public:
    Game();
    static void createBoard();
    static Card getCard(int cardNumber);
    static bool compareCards(Card card1, Card card2);
    virtual ~Game();

};
#endif //PROCTERMEMORYGAME_GAME_H
