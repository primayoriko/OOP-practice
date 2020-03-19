#include <bits/stdc++.h>
#include "Bottle.hpp"

using namespace std;

int Bottle::numOfBottle = 0;

Bottle::Bottle() : id(numOfBottle + 1)
{
    waterHeight = 0;
    height = 10;
    radius = 10;
    numOfBottle++;
}

Bottle::Bottle(float a, float b) : id(numOfBottle + 1)
{
    waterHeight = 0;
    height = a;
    radius = b;
    numOfBottle++;
}

Bottle::Bottle(const Bottle &a) : id(a.id)
{
    waterHeight = a.waterHeight;
    height = a.height;
    radius = a.radius;
}

Bottle::~Bottle() {}

int Bottle::getId() const
{
    return id;
}

float Bottle::getWaterVolume() const
{
    return PI * waterHeight * radius * radius;
}

float Bottle::getBottleVolume() const
{
    return PI * height * radius * radius;
}

void Bottle::setHeight(float s)
{
    height = s;
    if (waterHeight > s)
        waterHeight = s;
}

void Bottle::addWater(float w)
{
    if (w > height)
        waterHeight = height;
    else
    {
        waterHeight = w;
    }
}

void Bottle::substractWater(float w)
{
    if ()
}