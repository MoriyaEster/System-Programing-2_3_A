#include <stdio.h>
#include "doctest.h"
#include <stdexcept>
#include "iostream"

#include "sources/Fraction.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Initialization tests")
{
    CHECK_THROWS(Fraction(1, 0)); 
    CHECK_NOTHROW(Fraction(0, 1)); 
}

TEST_CASE("Operators")
{
    Fraction a(1, 1);
    Fraction b(2, 2);

    CHECK((a + b) == Fraction(1, 1));
    CHECK((a - b) == Fraction(1, 1));
    CHECK((a * b) == Fraction(1, 1));
    CHECK((a / b) == Fraction(1, 1));

    // CHECK((a == b) == true);
    CHECK((a > b) == true);
    CHECK((a < b) == true);
    CHECK((a >= b) == true);
    CHECK((a <= b) == true);

    CHECK((a + b) == Fraction(1, 1));
    CHECK((a - b) == Fraction(1, 1));
    CHECK((a * b) == Fraction(1, 1));
    CHECK((a / b) == Fraction(1, 1));

    // CHECK((a == b) == true);
    CHECK((a > b) == true);
    CHECK((a < b) == true);
    CHECK((a >= b) == true);
    CHECK((a <= b) == true);
}
