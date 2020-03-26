#ifndef __MINIBUS_H__
#define __MINIBUS_H__

#include<bits/stdc++.h>
#include "Kendaraan.hpp"

using namespace std;

class Minibus : public Kendaraan
{
public:
    // Default ctor
    Minibus();

    // User ctor
    Minibus(int nomor, int tahun, string merk);

    // cctor
    Minibus(const Minibus& other);

    // dtor
    ~Minibus();

    void printInfo();

    int biayaSewa(int lamaSewa);

    float calculateDiscount(int lamaSewa);
};

#endif