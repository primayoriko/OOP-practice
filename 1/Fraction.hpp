#ifndef FRACTION_HPP
#define FTACTION_HPP

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

#endif