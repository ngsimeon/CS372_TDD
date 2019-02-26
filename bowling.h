// bowling.hpp
// Simeon Ng
// Updated 2/25/19
// Header for 'bowling.cpp' bowling kata.

#ifndef BOWLING_H
#define BOWLING_H

#include <vector>
using std::vector;

class Game {

public:
    explicit Game(const vector<int> &);
    void setTotal();
    int getTotal() const;
    void scoreRoll(int);

private:
    int _totalScore = 0;
    bool _firstRoll = true;
    bool _isSpare = false;
    vector<int> _scoreboard;

};

#endif // BOWLING_H