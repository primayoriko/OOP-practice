#include<bits/stdc++.h>
#include "Minibus.hpp"

using namespace std;

// Default ctor
Minibus::Minibus() : Kendaraan() {}

// User ctor
Minibus::Minibus(int nomor, int tahun, string merk) : Kendaraan(nomor, tahun, merk) {}

// cctor
Minibus::Minibus(const Minibus& other)
{
    this->nomor = other.nomor;
    this->tahun = other.tahun;
    this->merk = other.merk;
}

// dtor
Minibus::~Minibus() {}

void Minibus::printInfo()
{
    Kendaraan::printInfo();
    printf("Kategori: Minibus\n");
}

int Minibus::biayaSewa(int lamaSewa)
{   
    float result = lamaSewa<=5 ? 5e6 : (5e6+(5e5*(lamaSewa-5)));
    return result*calculateDiscount(lamaSewa);
}

float Minibus::calculateDiscount(int lamaSewa)
{
    return lamaSewa>10? 0.9 : 1.0 ;
}