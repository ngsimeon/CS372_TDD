// bowling.cpp
// Simeon Ng
// Updated 2/25/19
// Bowling kata source file

#include "bowling.h"

Game::Game(const vector<int> & v) : _scoreboard(v) {}

int Game::getScore() {
    int total = 0;
    
    for (int i : _scoreboard) {
        total += i;
    }
    
    return total;
}