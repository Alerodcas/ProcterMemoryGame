//
// Created by alero on 28-Jun-22.
//

#ifndef PROCTERMEMORYGAME_CARD_H
#define PROCTERMEMORYGAME_CARD_H
#include <iostream>
#include <string>

using namespace std;

class Card {
private:
    string type;

public:
    void setType(const string &type);
    const string &getType() const;
    bool compareCards();
};


#endif //PROCTERMEMORYGAME_CARD_H
