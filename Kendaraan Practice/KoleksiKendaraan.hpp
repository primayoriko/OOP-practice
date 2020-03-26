#ifndef __KOLEKSIKENDARAAN_HPP__
#define __KOLEKSIKENDARAAN_HPP__

#include<bits/stdc++.h>
#include "Kendaraan.hpp"
#include "Mobil.hpp"
#include "Minibus.hpp"

using namespace std;

class KoleksiKendaraan {
private:
    Kendaraan** arr;
    int neff;
    int size;
public:
    KoleksiKendaraan();
    KoleksiKendaraan(int size);
    KoleksiKendaraan(const KoleksiKendaraan& other);
    KoleksiKendaraan& operator=(KoleksiKendaraan other);
    ~KoleksiKendaraan();

    void printAll();
    KoleksiKendaraan operator+(Kendaraan* k);
    KoleksiKendaraan operator+(KoleksiKendaraan koleksi);
};

#endif