//
// Created by alero on 28-Jun-22.
//

#ifndef PROCTERMEMORYGAME_CARD_H
#define PROCTERMEMORYGAME_CARD_H
#include <iostream>
#include <string>

using namespace std;

class Card {
public:
    void setType(const string &type);
    void setPoints();

    const string &getType() const;
    int getPoints() const;

private:
    string type;
    int points;
};


#endif //PROCTERMEMORYGAME_CARD_H
