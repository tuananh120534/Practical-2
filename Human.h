#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include "Move.h"

class Human : public Player {
private:
    std::string name;
public:
    Human(const std::string& name = "Human");
    Move* makeMove() override;
    std::string getName() override;
};

#endif
