// test.cpp
// Simeon Ng
// Updated 2/25/19
// Catch2 tests for TDD Bowling Kata

#include "catch.hpp"
#include "bowling.h"

TEST_CASE("Test Bowling Game") {

    // Gutter Game
    vector<int> v1(21, 0);
    Game g1(v1);
    SECTION("Gutter game scores 0")
    REQUIRE(g1.getTotal() == 0);

    // All ones
    vector<int> v2(20, 1);
    Game g2(v2);
    g2.setTotal();
    SECTION("All ones scores 20")
    REQUIRE(g2.getTotal() == 20);

    // Spare in first frame, followed by 3 pins.
    vector<int> v3{4,6,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    Game g3(v3);
    g3.setTotal();
    SECTION("Spare in first frame, followed by 3 pins, followed by all misses scores 16.")
    REQUIRE(g3.getTotal() == 16);
}