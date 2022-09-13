#include "cube.h"
#include "catch.hpp"



TEST_CASE("Verifying creation of cube")
{
    Point p(0, 0, 0);
    Cube shape = Cube(p);

    REQUIRE(shape.type() == "Cube");
    REQUIRE(shape.contains(p) == true);
    REQUIRE(shape.volume() == 1.0);
}