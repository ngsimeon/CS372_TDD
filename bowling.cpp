// bowling.cpp
// Simeon Ng
// Updated 2/25/19
// Bowling kata source file

#include "bowling.h"

Game::Game(const vector<int> & v) : _scoreboard(v) {}

void Game::setTotal() {

    for (int i : _scoreboard) {
        if(isStrike(i)) {
            // Score strike
        }
    }
}

int Game::getTotal() const {
    return _totalScore;
}

bool Game::isSpare(int roll) const {

}

bool Game::isStrike(int roll) const {

}