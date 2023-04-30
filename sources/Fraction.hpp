#pragma once
#include <stdio.h>
#include <iostream>
#include <cmath>

namespace ariel
{

    class Fraction
    {
    private:
        int numerator;
        int denominator;

    public:
        Fraction(int _numerator, int denominator);
        Fraction(float num);

        int getnumerator() const
        {
            return numerator;
        }
        int getdenominator() const
        {
            return denominator;
        }

        // Operators
        const Fraction operator+(const Fraction &other) const;
        const Fraction operator-(const Fraction &other) const;
        const Fraction operator*(const Fraction &other) const;
        const Fraction operator/(const Fraction &other) const;
        bool operator==(const Fraction &other) const;
        bool operator!=(const Fraction &other) const;
        bool operator<(const Fraction &other) const;
        bool operator>(const Fraction &other) const;
        bool operator<=(const Fraction &other) const;
        bool operator>=(const Fraction &other) const;

        const Fraction operator+(const float other) const;
        const Fraction operator-(const float other) const;
        const Fraction operator*(const float other) const;
        const Fraction operator/(const float other) const;
        bool operator==(const float other) const;
        bool operator!=(const float other) const;
        bool operator<(const float other) const;
        bool operator>(const float other) const;
        bool operator<=(const float other) const;
        bool operator>=(const float other) const;

        friend const Fraction operator+(const float num, const Fraction &frac);
        friend const Fraction operator-(const float num, const Fraction &frac);
        friend const Fraction operator*(const float num, const Fraction &frac);
        friend const Fraction operator/(const float num, const Fraction &frac);
        friend bool operator==(const float num, const Fraction &frac);
        friend bool operator!=(const float num, const Fraction &frac);
        friend bool operator<(const float num, const Fraction &frac);
        friend bool operator>(const float num, const Fraction &frac);
        friend bool operator<=(const float num, const Fraction &frac);
        friend bool operator>=(const float num, const Fraction &frac);

        Fraction& operator++();
        Fraction& operator--();
        Fraction operator++(int);
        Fraction operator--(int);

        friend std::ostream &operator<<(std::ostream &os, const Fraction &frac);
        friend std::istream &operator>>(std::istream &is, Fraction &frac);
    };
}