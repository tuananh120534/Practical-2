#ifndef REFERRE_H
#define REFERRE_H
#include <iostream>
using namespace std;
#include "Player.h"

class Referee {
public:
    Referee(); // constructor
    Player * refGame(Player * player1, Player * player2);
// returns the reference to the winning player

};
#endif