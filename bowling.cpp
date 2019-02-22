// bowling.cpp
// Simeon Ng
// Updated 2/17/19
// Bowling kata source file

#include "bowling.h"

Game::Game() {}

Game::Game(vector<int> & v) : _scoreboard(v) {}

int Game::getScore() {
    int total = 0;
    
    for(int i = 0; i < _scoreboard.size(); ++i) {
        total += _scoreboard[i];
    }
    
    return total;
}