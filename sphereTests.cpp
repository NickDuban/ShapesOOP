#include "catch.h"
#include "sphere.h"

TEST_CASE("Create a sphere with sphere constructor, radius should be 1"){
    point location = point(0,0,0);
    sphere first = sphere(location);

    REQUIRE(first.radius == 1);
}

TEST_CASE("a Sphere of radius 1 should have a volume of 4.19"){
    point location = point(0,0,0);
    sphere second = sphere(location);

    REQUIRE(second.volume() == 4.19);
}

TEST_CASE("sphere at point 0,0,0 with radius 1 will contain point 0,0,.2"){
    point location = point(0,0,0);
    const point testloc = point(0,0,.2);
    sphere third = sphere(location);

    REQUIRE(third.contains(testloc) == true);
}

TEST_CASE("sphere at point 0,0,0 with radius 1 will not conatin point 2, 2, 2"){
    point location = point(0,0,0);
    const point testloc = point(2,2,2);
    sphere fourth = sphere(location);

    REQUIRE(fourth.contains(testloc) == false);
}
