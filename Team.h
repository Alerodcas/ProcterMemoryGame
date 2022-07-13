//
// Created by alero on 11-Jul-22.
//

#ifndef PROCTERMEMORYGAME_TEAM_H
#define PROCTERMEMORYGAME_TEAM_H


class Team {
public:
    Team();

private:
    int points;
    int turns;
public:

    int getPoints() const;

    void givePoints();

    int getTurns() const;

    void addTurns();

    void resetTurns();
};


#endif //PROCTERMEMORYGAME_TEAM_H
