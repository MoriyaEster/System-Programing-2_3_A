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

TEST_CASE("Fraction initialization"){
    Fraction a(5,11);
    Fraction c = a;

    CHECK_EQ( Fraction(3400,1000),  Fraction(17,5));
    CHECK_EQ(a, c);
       
}

TEST_CASE("operator+ and operator- with names"){
    Fraction one(1,1);
    Fraction two(2,1);
    Fraction three_half(7,2);
    Fraction two_half(5,2);

    CHECK_EQ(one + one, two);
    CHECK_EQ(one + 1, two);
    CHECK_EQ(2.5 + one, three_half);
    CHECK_EQ(two_half + one, three_half);
    CHECK_EQ(1.5 + one + two, two + 2.5);

    Fraction zero (0,1);
    Fraction one(1,1);
    Fraction two(2,1);
    Fraction one_half(3,2);
    Fraction two_half(5,2);

    CHECK_EQ(one - one, zero);
    CHECK_EQ(one - 1, zero);
    CHECK_EQ(2.5 - one, one_half);
    CHECK_EQ(two_half - one, one_half);
    CHECK_EQ(1.5 - one + two, two + 1.5);
}

TEST_CASE("all operators")
{
    Fraction a(5, 3), b(14, 21);
    CHECK(a + b == Fraction(7, 3));
    CHECK(a - b == Fraction(1, 1));
    CHECK(a * b == Fraction(10, 9));
    CHECK(a / b == Fraction(5, 2));
    CHECK(a + 2.421 == Fraction(12263, 3000));
    CHECK(2.3 * b == Fraction(23, 15));
    CHECK(a > 1.1);
    CHECK(a >= b);
    CHECK(a != b);
    CHECK(a == Fraction(5, 3));
    CHECK(a != Fraction(5, 4));
    CHECK(a < Fraction(5, 2));
    CHECK(a <= Fraction(5, 3));
    CHECK(a++ == Fraction(5, 3));
    CHECK(a == Fraction(8, 3));
    CHECK(--a == Fraction(5, 3));
    CHECK(a == Fraction(5, 3));
    CHECK(a-- == Fraction(5, 3));
    CHECK(a == Fraction(2, 3));
    CHECK(++a == Fraction(5, 3));
    CHECK(a == Fraction(5, 3));
    CHECK(a++ == Fraction(5, 3));
    CHECK(a == Fraction(8, 3));
    CHECK(a-- == Fraction(8, 3));
    CHECK(a == Fraction(5, 3));
    CHECK(--a == Fraction(2, 3));
    CHECK(a == Fraction(2, 3));
}
