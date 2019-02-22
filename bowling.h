// bowling.hpp
// Simeon Ng
// Updated 2/17/19
// Header for 'bowling.cpp' bowling kata.

#ifndef BOWLING_H
#define BOWLING_H

#include <vector>;
using std::vector;

class Game {
public:
    Game();
    Game(vector<int> &);
    int getScore();
private:
    int _totalScore = 0;
    vector<int> _scoreboard;

};

#endif // BOWLING_H