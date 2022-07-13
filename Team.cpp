//
// Created by alero on 11-Jul-22.
//

#include "Team.h"

Team::Team() {
    this->points = 0;
    this->turns = 0;
}

int Team::getPoints() const {
    return points;
}

void Team::givePoints() {
    Team::points += 2 + this->getTurns();
}

int Team::getTurns() const {
    return turns;
}

void Team::resetTurns() {
    Team::turns = 0;
}

void Team::addTurns() {
    Team::turns += 1;
}
