#include<bits/stdc++.h>
#include "Bus.hpp"
#include "Kendaraan.hpp"

using namespace std;

// Default ctor
Bus::Bus() : Kendaraan()
{
    this->kapasitas = 0;
}

// User ctor
Bus::Bus(int nomor, int tahun, string merk, int kapasitas) : Kendaraan(nomor,tahun,merk)
{
    this->kapasitas = kapasitas;
}

// cctor
Bus::Bus(const Bus& other)
{
    this->nomor = other.nomor;
    this->tahun = other.tahun;
    this->merk = other.merk;
    this->kapasitas = other.kapasitas;
}

// dtor
Bus::~Bus() {}

void Bus::printInfo()
{
    Kendaraan::printInfo();
    printf("Kategori: Bus\n");
    printf("Cap\t: %d\n", this->kapasitas);
}

int Bus::biayaSewa(int lamaSewa)
{
    return 1e6*lamaSewa;
}