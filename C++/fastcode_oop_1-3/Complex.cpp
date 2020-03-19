#include <bits/stdc++.h>
#include "Complex.h"

using namespace std;

Complex::Complex()
{
    imaginer = 0;
    real = 0;
}
Complex::Complex(int re, int im)
{
    real = re;
    imaginer = im;
}

Complex::Complex(const Complex &c)
{
    imaginer = c.imaginer;
    real = c.real;
}

Complex::~Complex() {}

int Complex::getReal()
{
    return real;
}

int Complex::getImaginer()
{
    return imaginer;
}

void Complex::setReal(int r)
{
    real = r;
}

void Complex::setImaginer(int i)
{
    imaginer = i;
}

Complex Complex::operator+(Complex const &c)
{
    Complex a(*this);
    a.real += c.real;
    a.imaginer += c.imaginer;
    return a;
}

Complex Complex::operator-(Complex const &c)
{
    Complex a(*this);
    a.real -= c.real;
    a.imaginer -= c.imaginer;
    return a;
}

Complex Complex::operator*(Complex const &c)
{
    Complex a;
    a.real = real * c.real - imaginer * c.imaginer;
    a.imaginer = real * c.imaginer + imaginer * c.real;
    return a;
}