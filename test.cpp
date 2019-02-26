// test.cpp
// Simeon Ng
// Updated 2/25/19
// Catch2 tests for TDD Bowling Kata

#include "catch.hpp"
#include "bowling.h"

TEST_CASE("Test Bowling Game") {

    SECTION("Gutter game scores 0")
    vector<int> v1(21, 0); // Gutter game
    Game g1(v1);
    REQUIRE(g1.getScore() == 0);

    SECTION("All ones scores 20")
    vector<int> v2(20, 1); // All ones
    Game g2(v2);
    REQUIRE(g2.getScore() == 20);
}