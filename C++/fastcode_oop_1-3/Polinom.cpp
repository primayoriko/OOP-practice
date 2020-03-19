#include <bits/stdc++.h>
#include "Polinom.hpp"
using namespace std;

Polinom::Polinom()
{
    derajat = 0;
    for (int i = 0; i < MAX_LENGTH; i++)
        this->koef[i] = 0;
}

Polinom::Polinom(int i)
{
    derajat = i;
    for (int i = 0; i < MAX_LENGTH; i++)
        this->koef[i] = 0;
}

Polinom::Polinom(const Polinom &T)
{
    derajat = T.derajat;
    for (int i = 0; i <= derajat; i++)
    {
        koef[i] = T.koef[i];
    }
}

Polinom::~Polinom() {}

Polinom &Polinom::operator=(const Polinom &T)
{
    derajat = T.derajat;
    for (int i = 0; i <= derajat; i++)
    {
        koef[i] = T.koef[i];
    }
    return *this;
}

int Polinom::getKoefAt(int i) const
{
    return koef[i];
}

int Polinom::getDerajat() const
{
    return derajat;
}

void Polinom::setKoefAt(int i, int v)
{
    koef[i] = v;
}

void Polinom::setDerajat(int n)
{
    derajat = n;
}

Polinom operator+(const Polinom &X, const Polinom &Y)
{
    Polinom Z(max(X.getDerajat(), Y.getDerajat()));
    for (int i = 0; i <= Z.getDerajat(); i++)
    {
        Z.setKoefAt(i, X.getKoefAt(i) + Y.getKoefAt(i));
    }
    return Z;
}

Polinom operator-(const Polinom &X, const Polinom &Y)
{
    Polinom Z(max(X.getDerajat(), Y.getDerajat()));
    for (int i = 0; i <= Z.getDerajat(); i++)
    {
        Z.setKoefAt(i, X.getKoefAt(i) - Y.getKoefAt(i));
    }
    return Z;
}

Polinom operator*(const Polinom &X, const int Y)
{
    Polinom Z(X.getDerajat());
    for (int i = 0; i <= Z.getDerajat(); i++)
    {
        Z.setKoefAt(i, X.getKoefAt(i) * Y);
    }
    return Z;
}

Polinom operator*(const int Y, const Polinom &X)
{
    Polinom Z(X.getDerajat());
    for (int i = 0; i <= Z.getDerajat(); i++)
    {
        Z.setKoefAt(i, X.getKoefAt(i) * Y);
    }
    return Z;
}

Polinom operator/(const Polinom &X, const int Y)
{
    Polinom Z(X.getDerajat());
    for (int i = 0; i <= Z.getDerajat(); i++)
    {
        Z.setKoefAt(i, X.getKoefAt(i) / Y);
    }
    return Z;
}

void Polinom::input()
{
    for (int i = 0; i <= derajat; i++)
    {
        cin >> koef[i];
    }
}

void Polinom::printKoef()
{
    for (int i = 0; i <= derajat; i++)
    {
        cout << koef[i] << endl;
    }
}

int Polinom::substitute(int t)
{
    int cur = 1, sum(0);
    for (int i = 0; i <= derajat; i++)
    {
        sum += cur * koef[i];
        cur *= t;
    }
    return sum;
}

Polinom Polinom::derive()
{
    Polinom T(*this);
    int i = derajat - 1;
    while (i > -1 && T.koef[i] != 0)
        i--;
    T.derajat = i;
    return T;
}

void Polinom::print() {}