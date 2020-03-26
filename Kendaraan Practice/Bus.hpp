#ifndef __BUS_H__
#define __BUS_H__

#include<bits/stdc++.h>
#include "Kendaraan.hpp"

using namespace std;

class Bus : public Kendaraan
{
private:
    int kapasitas;
public:
    // Default ctor
    Bus();

    // User ctor
    Bus(int nomor, int tahun, string merk, int kapasitas);

    // cctor
    Bus(const Bus& other);

    // dtor
    ~Bus();

    void printInfo();

    int biayaSewa(int lamaSewa);
};

#endif