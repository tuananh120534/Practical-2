#include "Human.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include <iostream>
#include <unordered_map>

Human::Human(const std::string& name) : name(name) {}

Move* Human::makeMove() {
    std::string moveName;
    std::cout << "Enter Move: ";
    std::cin >> moveName;

    static std::unordered_map<std::string, Move*> moveMap = {
        {"Rock", new Rock()},
        {"Paper", new Paper()},
        {"Scissors", new Scissors()}
        // Add more moves here as needed
    };

    return moveMap[moveName];
}

std::string Human::getName() {
    return name;
}
