#ifndef __MOBIL_H__
#define __MOBIL_H__

#include<bits/stdc++.h>
#include "Kendaraan.hpp"

using namespace std;

class Mobil : public Kendaraan
{
private:
    string supir;
public:
    // Default ctor
    Mobil();

    // User ctor
    Mobil(int nomor, int tahun, string merk, string supir);

    // cctor
    Mobil(const Mobil& other);

    // dtor
    ~Mobil();

    void printInfo();

    int biayaSewa(int lamaSewa);

};

#endif