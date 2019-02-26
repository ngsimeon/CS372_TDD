// bowling.cpp
// Simeon Ng
// Updated 2/25/19
// Bowling kata source file

#include "bowling.h"
#include <iostream>
using std::cout;
using std::endl;

Game::Game(const vector<int> & v) : _scoreboard(v) {}

void Game::setTotal() {
    int prevRoll = 0;

    for (const auto& i : _scoreboard) {
        if(i == 10 && _firstRoll) {
            // Score strike
        }
        else if (prevRoll + i == 10 && !_firstRoll) {
            // Score spare
            scoreRoll(i);
            _isSpare = true;
        }
        else {
            if(_isSpare) {
                this->scoreRoll(2*i);
                _isSpare = false;
            }
            else {
                this->scoreRoll(i);
                prevRoll = i;
                _firstRoll = false;
            }

        }
    }
}

int Game::getTotal() const {
    return _totalScore;
}

void Game::scoreRoll(int roll) {
    _totalScore += roll;
}