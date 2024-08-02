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
        // Add other moves as needed
    };

    auto it = moveMap.find(moveName);
    if (it != moveMap.end()) {
        return it->second;
    } else {
        std::cout << "Invalid move entered. Defaulting to Rock." << std::endl;
        return new Rock();
    }
}

std::string Human::getName() {
    return name;
}
