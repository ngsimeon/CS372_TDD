// test.cpp
// Simeon Ng
// Updated 2/17/19
// Catch2 tests for TDD Bowling Kata

#include "catch.hpp"
#include "bowling.h"

vector<int> v1(21, 0); // Gutter game
g1 = Game(v1);

TEST_CASE("Gutter Game Scores Zero") {
    REQUIRE(g1.getScore() == 0);
}