#include "Paper.h"
#include "Rock.h"

std::string Paper::getName() const {
    return "Paper";
}

bool Paper::beats(const Move& other) const {
    return other.getName() == "Rock";
}
