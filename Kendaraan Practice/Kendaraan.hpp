#ifndef __KENDARAAN_HPP__
#define __KENDARAAN_HPP__

#include<bits/stdc++.h>

using namespace std;

class Kendaraan {
protected:
    int nomor;
    int tahun;
    string merk;
public:
    // Default ctor
    Kendaraan();

    // User-defined ctor
    Kendaraan(int nomor, int tahun, string merk);

    // Cctor
    Kendaraan(const Kendaraan& other);

    // Assignment
    Kendaraan& operator=(Kendaraan other); 

    // Dtor
    ~Kendaraan();
    
    // Methods
    virtual void printInfo();

    virtual int biayaSewa(int lamaSewa);


};

#endif