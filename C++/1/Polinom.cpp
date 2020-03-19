#include "Polinom.hpp"

using namespace std;

Polinom::Polinom()
{
    derajat = 0;
}

Polinom::Polinom(int n)
{
    derajat = n;
}

Polinom::Polinom(const Polinom &c)
{
    derajat = c.derajat;
    for (i = 0; i <= derajat; i++)
    {
        koef[i] = c.koef[i];
    }
}

Polinom::~Polinom() {}

Polinom &Polinom::operator=(const Polinom &c)
{
    derajat = c.derajat;
    for (i = 0; i <= derajat; i++)
    {
        koef[i] = c.koef[i];
    }
    return *this;
}