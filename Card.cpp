//
// Created by alero on 28-Jun-22.
//

#include "Card.h"

void Card::setType(const string &type) {
    Card::type = type;
    Card::setPoints();
}

const string &Card::getType() const {
    return type;
}

int Card::getPoints() const {
    return points;
}

void Card::setPoints() {
    if (Card::type == "Hola"){
        Card::points = 1;
    }
    else if (Card::type == "Que"){
        Card::points = 2;
    }
    else if (Card::type == "Tal"){
        Card::points = 3;
    }
    else{
        Card::points = 0;
    }
}
