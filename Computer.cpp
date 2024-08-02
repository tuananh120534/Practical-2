#include "Computer.h"
#include "Rock.h"

Move* Computer::makeMove() {
    return new Rock(); // Always plays Rock
}

std::string Computer::getName() {
    return "Computer";
}
