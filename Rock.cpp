#include "Rock.h"
#include "Scissors.h"

std::string Rock::getName() const {
    return "Rock";
}

bool Rock::beats(const Move& other) const {
    return other.getName() == "Scissors";
}
