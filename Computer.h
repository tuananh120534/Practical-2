#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include "Move.h"

class Computer : public Player {
public:
    Move* makeMove() override;
    std::string getName() override;
};

#endif
