#include <bits/stdc++.h>
using namespace std;

class Kendaraan
{
protected:
    int nomor;
    int tahun_keluaran;
    string merk;
    string kategori;

public:
    Kendaraan()
    {
        nomor = 0;
        tahun_keluaran = 0;
        merk = "XXX";
        kategori = "mobil";
    }
    Kendaraan(int a, int b, string c, string d)
    {
        nomor = a;
        tahun_keluaran = b;
        merk = c;
        kategori = d;
    }
    Kendaraan(const Kendaraan &a)
    {
        nomor = a.nomor;
        tahun_keluaran = a.tahun_keluaran;
        merk = a.merk;
        kategori = a.kategori;
    }
    ~Kendaraan() {}
    Kendaraan operator=(const Kendaraan &a)
    {
        return Kendaraan(a);
    }

    virtual void PrintInfo()
    {
        printf("Nomor : %d\n", nomor);
        printf("Tahun Keluaran : %d\n", tahun_keluaran);
        printf("Merk : ");
        cout << merk << endl;
        printf("Kategori : ");
        cout << kategori << endl;
    }

    int BiayaSewa(int c)
    {
        if (kategori == "Bus" || kategori == "bus")
            return (int)1e6 * c;
        else if (kategori == "Minibus" || kategori == "minibus")
        {
            if (c > 5)
                return (int)5e6 + (c - 5) * (int)5e5;
            else
                return (int)5e6;
        }
        else if (kategori == "Mobil" || kategori == "mobil")
            return (int)5e5 * c;
        else
            return 0;
    }
    //friend KoleksiKendaraan operator+(KoleksiKendaraan &, Kendaraan &);
    friend class KoleksiKendaraan;
};

class Bus : public Kendaraan
{
private:
    int kapasitas;

public:
    Bus() : Kendaraan()
    {
        kapasitas = 0;
        kategori = "bus";
    }

    void PrintInfo()
    {
        Kendaraan::PrintInfo();
        cout << "Kapasitas : " << kapasitas << endl;
    }
};

class Minibus : public Kendaraan
{
public:
    Minibus() : Kendaraan()
    {
        kategori = "minibus";
    }
    int calculateDiscount(int lamasewa)
    {
        int x = Kendaraan::BiayaSewa(lamasewa);
        if (lamasewa > 10)
        {
            x -= (int)(0.1 * float(x));
        }
        return x;
    }
    void PrintInfo()
    {
        Kendaraan::PrintInfo();
        //cout << "Kapasitas : " << kapasitas << endl;
    }
};

class Mobil : public Kendaraan
{
protected:
    string sopir;

public:
    Mobil() : Kendaraan()
    {
        sopir = "XXXX";
        kategori = "mobil";
    }
    void PrintInfo()
    {
        Kendaraan::PrintInfo();
        cout << "Sopir : " << sopir << endl;
    }
};