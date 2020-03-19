#include <bits/stdc++.h>
#include "Kendaraan.cpp"
using namespace std;

class KoleksiKendaraan
{
private:
    Kendaraan *Kend;
    int Neff;

public:
    KoleksiKendaraan()
    {
        Kend = new Kendaraan[100];
        Neff = 0;
    }

    KoleksiKendaraan(int a)
    {
        Kend = new Kendaraan[a];
        Neff = 0;
    }
    KoleksiKendaraan(const KoleksiKendaraan &a)
    {
        delete Kend;
        Kend = new Kendaraan[sizeof(a.Kend)];
        Neff = a.Neff;
        for (int i = 0; i < Neff; i++)
        {
            Kend[i] = a.Kend[i];
        }
    }
    ~KoleksiKendaraan()
    {
        delete Kend;
    }

    KoleksiKendaraan operator=(const KoleksiKendaraan &a)
    {
        return KoleksiKendaraan(a);
    }

    int getNeff()
    {
        return Neff;
    }

    void incNeff()
    {
        Neff++;
    }

    void setKend(int i, Kendaraan &x)
    {
        Kend[i] = x;
    }

    void PrintAll() const
    {
        for (int i = 0; i < Neff; i++)
        {
            printf("Data Kendaraan %d:\n", i + 1);
            Kend[i].PrintInfo();
            printf("\n");
        }
    }

    KoleksiKendaraan operator+(const Kendaraan &other)
    {
        KoleksiKendaraan y(*this);
        y.Kend[Neff] = other;
        y.Neff++;
        return y;
    }

    //friend KoleksiKendaraan operator+(KoleksiKendaraan &, Kendaraan &);

    KoleksiKendaraan operator+(const KoleksiKendaraan &a)
    {
        int lim = (sizeof(Kend) < Neff + a.Neff) ? sizeof(Kend) : Neff + a.Neff;
        for (int i = 0; i < lim; i++)
        {
            Kend[Neff + i] = a.Kend[i];
        }
        Neff += lim;
        return *this;
    }
};

/*KoleksiKendaraan operator+(KoleksiKendaraan &b, Kendaraan &a)
{
    // cout << sizeof(b.Kend) << endl;
    //if (Neff < sizeof(Kend))
    //{
    b.setKend(b.getNeff(), a);
    b.incNeff();
    //}
    return b;
}*/