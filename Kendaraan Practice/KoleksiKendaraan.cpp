#include<bits/stdc++.h>
#include "KoleksiKendaraan.hpp"

KoleksiKendaraan::KoleksiKendaraan()
{
    this->arr = new Kendaraan*[100];
    this->size = 100;
    this->neff = 0;
}
KoleksiKendaraan::KoleksiKendaraan(int size)
{
    this->arr = new Kendaraan*[size];
    this->neff = 0;
    this->size = size;
}

KoleksiKendaraan::KoleksiKendaraan(const KoleksiKendaraan& other)
{
    this->arr = new Kendaraan*[other.size];
    this->neff = other.neff;

    for(int i=0;i<this->neff;i++)
        arr[i] = other.arr[i];
    
    this->size = other.size;
}

KoleksiKendaraan& KoleksiKendaraan::operator=(KoleksiKendaraan other)
{
    this->arr = new Kendaraan*[other.size];
    this->neff = other.neff;

    for(int i=0;i<this->neff;i++)
        arr[i] = other.arr[i];
    
    this->size = other.size;

    return *this;
}

KoleksiKendaraan::~KoleksiKendaraan()
{
    delete this->arr;
}

void KoleksiKendaraan::printAll()
{
    for(int i=0;i<this->neff;i++)
    {
        printf("Index : %d\n", i);
        this->arr[i]->printInfo();
        printf("-------\n");
    }
}

KoleksiKendaraan KoleksiKendaraan::operator+(Kendaraan* k)
{
    KoleksiKendaraan tmp(*this);
    
    tmp.arr[tmp.neff] = k;
    tmp.neff++;

    return tmp;
}
KoleksiKendaraan KoleksiKendaraan::operator+(KoleksiKendaraan koleksi)
{
    KoleksiKendaraan tmp(*this);

    int c=0;
    for(int i=tmp.neff;i<tmp.size;i++,tmp.neff++)
        tmp.arr[i] = koleksi.arr[c++];

    return tmp;

}
