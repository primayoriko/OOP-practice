#include<bits/stdc++.h>
#include "Mobil.hpp"

using namespace std;

// Default ctor
Mobil::Mobil() : Kendaraan()
{
    this->supir = "XXX";
}

// User ctor
Mobil::Mobil(int nomor, int tahun, string merk, string supir) : Kendaraan(nomor, tahun, merk)
{
    this->supir = supir;
}

// cctor
Mobil::Mobil(const Mobil& other)
{
    this->nomor = other.nomor;
    this->tahun = other.tahun;
    this->merk = other.merk;
    this->supir = other.supir;
}

// dtor
Mobil::~Mobil() {}

void Mobil::printInfo()
{
    Kendaraan::printInfo();
    printf("Kategori: Mobil\n");
    printf("Supir\t: ");cout<< this->supir << "\n";
}

int Mobil::biayaSewa(int lamaSewa)
{
    return 5e5*lamaSewa;
}