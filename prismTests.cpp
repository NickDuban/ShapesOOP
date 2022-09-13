#include "catch.h"
#include "prism.h"

TEST_CASE("Create a prism with the prism constructor, xy&z dim should be 1"){
    point location = point(0,0,0);
    prism first = prism(location);

    REQUIRE(first.xdim == 1);
    REQUIRE(first.ydim == 1);
    REQUIRE(first.zdim == 1);
}

TEST_CASE("a prism of xyz dim = 1 should have a volume of 1"){
    point location = point(0,0,0);
    prism second = prism(location);

    REQUIRE(second.volume() == 1);
}

TEST_CASE("a prism at point 0,0,0 with xyz dim = 1 will contain point 0,0.1,.2"){
    point location = point(0,0,0);
    const point testloc = point(0,0.1,.2);
    prism third = prism(location);

    REQUIRE(third.contains(testloc) == true);
}

TEST_CASE("a prism at point 0,0,0 with xyz dim = 1 will not conatin point 2, 2, 2"){
    point location = point(0,0,0);
    const point testloc = point(2,2,2);
    prism fourth = prism(location);

    REQUIRE(fourth.contains(testloc) == false);
}
