#include <stdio.h>
#include <iostream>
#include "Fraction.hpp"

namespace ariel
{

    Fraction::Fraction(float num)
        : numerator(int(num)), denominator(int(num)) // must to change!!!1
    {
    }

    Fraction::Fraction(int _numerator, int _denominator)
        : numerator(_numerator), denominator(_denominator)
    {
    }

    Fraction &Fraction::operator++()
    {
        return *this;
    }
    Fraction &Fraction::operator--()
    {
        return *this;
    }
    Fraction Fraction::operator++(int num)
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator--(int num)
    {
        return Fraction(1, 1);
    }
    std::ostream &operator<<(std::ostream &os, const Fraction &frac)
    {
        os << frac.getnumerator() << "/" << frac.getdenominator();
        return os;
    }

    std::istream &operator>>(std::istream &is, Fraction &frac)
    {
        return is;
    }
}