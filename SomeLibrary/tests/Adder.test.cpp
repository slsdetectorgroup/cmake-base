#include "catch.hpp"
#include "psi/Adder.h"
TEST_CASE("Add two numbers"){
    psi::Adder a;
    REQUIRE(a.add(3, 4) == 7);
}