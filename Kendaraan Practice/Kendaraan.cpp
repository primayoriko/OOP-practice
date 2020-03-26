#include<bits/stdc++.h>
#include"Kendaraan.hpp"

using namespace std;

// Default ctor
Kendaraan::Kendaraan()
{
    this->nomor = 0;
    this->tahun = 0;
    this->merk = "XXX";
};

// User-defined ctor
Kendaraan::Kendaraan(int nomor, int tahun, string merk)
{
    this->nomor = nomor;
    this->tahun = tahun;
    this->merk = merk;
}

// Cctor
Kendaraan::Kendaraan(const Kendaraan& other)
{
    this->nomor = other.nomor;
    this->tahun = other.tahun;
    this->merk = other.merk;
}

// Assignment
Kendaraan& Kendaraan::operator=(Kendaraan other)
{
    this->nomor = other.nomor;
    this->tahun = other.tahun;
    this->merk = other.merk;

    return *this;
}

// Dtor
Kendaraan::~Kendaraan() {}

// Methods
void Kendaraan::printInfo()
{
    printf("Nomor\t: %d\n", this->nomor);
    printf("Tahun\t: %d\n", this->tahun);
    printf("Merk\t:");cout << " " << this->merk << "\n";
} 

int Kendaraan::biayaSewa(int lamaSewa)
{
    return -1;
}
