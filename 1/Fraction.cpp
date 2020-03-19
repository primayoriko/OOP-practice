//Fraction.cpp
#include <bits/stdc++.h>
using namespace std;

class Fraction
{
public:
    Fraction();
    Fraction(int, int);
    Fraction(const Fraction &);
    ~Fraction();

    int getNominator();
    int getDenominator();
    void setNominator(int);
    void setDenominator(int);

    Fraction operator=(const Fraction &);
    Fraction operator+(const Fraction &);
    Fraction operator-(const Fraction &);
    Fraction operator*(const Fraction &);
    Fraction operator/(const Fraction &);
    bool operator==(const Fraction &);
    bool operator!=(const Fraction &);
    int gcd(int, int);

private:
    int nominator;
    int denominator;
};

Fraction::Fraction()
{
    nominator = 0;
    denominator = 1;
}

Fraction::Fraction(int a, int b)
{
    nominator = a;
    denominator = b;
    if (b == 0)
        denominator = 1;
    int g = gcd(nominator, denominator);
    nominator /= g;
    denominator /= g;
}

Fraction::Fraction(const Fraction &d)
{
    nominator = d.nominator;
    denominator = d.denominator;
}

Fraction::~Fraction() {}

int Fraction::getNominator()
{
    return nominator;
}
int Fraction::getDenominator()
{
    return denominator;
}

void Fraction::setNominator(int a)
{
    nominator = a;
}
void Fraction::setDenominator(int a)
{
    denominator = a;
}

Fraction Fraction::operator=(const Fraction &a)
{
    nominator = a.nominator;
    denominator = a.denominator;
    return *this;
}
Fraction Fraction::operator+(const Fraction &a)
{
    Fraction c;
    c.denominator = a.denominator * denominator;
    c.nominator = a.denominator * nominator + denominator * a.nominator;
    int g = gcd(c.nominator, c.denominator);
    c.nominator /= g;
    c.denominator /= g;
    return c;
}
Fraction Fraction::operator-(const Fraction &a)
{
    Fraction c;
    c.denominator = a.denominator * denominator;
    c.nominator = (a.denominator * nominator) - denominator * a.nominator;
    int g = gcd(c.nominator, c.denominator);
    c.nominator /= g;
    c.denominator /= g;
    return c;
}
Fraction Fraction::operator*(const Fraction &a)
{
    Fraction c;
    c.denominator = a.denominator * denominator;
    c.nominator = a.nominator * nominator;
    int g = gcd(c.nominator, c.denominator);
    c.nominator /= g;
    c.denominator /= g;
    return c;
}
Fraction Fraction::operator/(const Fraction &a)
{
    Fraction c;
    c.denominator = denominator * a.nominator;
    c.nominator = nominator * a.denominator;
    int g = gcd(c.nominator, c.denominator);
    c.nominator /= g;
    c.denominator /= g;
    return c;
}

bool Fraction::operator==(const Fraction &a)
{
    if ((nominator == 0 && a.nominator != 0) || (a.nominator == 0 && nominator != 0))
        return false;
    else
        return nominator / a.nominator == denominator / a.denominator && nominator % a.nominator == denominator % a.denominator;
}

bool Fraction::operator!=(const Fraction &a)
{
    bool x = (*this == a);
    return !x;
}

int Fraction::gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}