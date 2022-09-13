#include "catch.hpp"
#include "point.h"

using namespace std;

TEST_CASE("Points have the correct values for x, y, z")
{
    Point P = (1, 2, 3);
    REQUIRE(P.xLoc == 1);
    REQUIRE(P.xLoc == 3);
    REQUIRE(P.xLoc == 3);
}

TEST_CASE("Points have the correct values for x, y, z")
{
    Point P = (1, 1, 1);
    REQUIRE(P.distance == );
}
