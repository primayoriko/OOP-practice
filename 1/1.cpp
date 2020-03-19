#include <bits/stdc++.h>

using namespace std;

#define BUS 0
#define MINIBUS 1
#define MOBIL 2

class Kendaraan
{
private:
  vector<pair<int, string>> map{{BUS, "Bus"}, {MINIBUS, "Minibus"}, {MOBIL, "Mobil"}};
  int kategori;
  int nomor;
  string merk;
  int tahun;

public:
  Kendaraan()
  {
    this->kategori = MOBIL;
    this->nomor = 0;
    this->merk = "XXX";
    this->tahun = 0;
  }
  Kendaraan(int kategori, int nomor, string merk, int tahun)
  {
    this->kategori = kategori;
    this->nomor = nomor;
    this->merk = merk;
    this->tahun = tahun;
  }
  ~Kendaraan() {}
  Kendaraan &operator=(const Kendaraan &K)
  {
    this->kategori = K.kategori;
    this->nomor = K.nomor;
    this->merk = K.merk;
    this->tahun = K.tahun;
    return *this;
  }
  void PrintInfo()
  {
    cout << "Kategori  : " << map.at(this->kategori).second << endl
         << "Nomor     : " << this->nomor << endl
         << "Merk      : " << this->merk << endl
         << "Tahun     : " << this->tahun << endl;
  }
  int BiayaSewa(int lamaSewa)
  {
    if (this->kategori == BUS)
    {
      return (1000000 * lamaSewa);
    }
    else if (this->kategori == MINIBUS)
    {
      return (lamaSewa <= 5) ? (5000000) : (5000000 + 500000 * (lamaSewa - 5));
    }
    else if (this->kategori == BUS)
    {
      return (500000 * lamaSewa);
    }
  }
  friend class KoleksiKendaraan;
};

class KoleksiKendaraan
{
private:
  Kendaraan *data;
  int neff;

public:
  KoleksiKendaraan()
  {
    this->data = new Kendaraan[999];
    neff = 0;
  }
  void PrintAll()
  {
    for (int i = 0; i < neff; i++)
    {
      this->data[i].PrintInfo();
    }
  }
  KoleksiKendaraan &operator+(const Kendaraan &K)
  {
    this->data[neff] = K;
    neff++;
    return *this;
  }
  KoleksiKendaraan &operator=(const KoleksiKendaraan &Kol)
  {
    delete[] this->data;
    this->neff = Kol.neff;
    this->data = new Kendaraan[999];
    for (int i = 0; i < this->neff; i++)
    {
      this->data[i] = Kol.data[i];
    }
    return *this;
  }
};

int main(int argc, char const *argv[])
{
  Kendaraan K1 = Kendaraan(BUS, 1, "AAA", 2000);
  // K1.PrintInfo();
  KoleksiKendaraan Kol;
  (Kol + K1).PrintAll();
  Kol = Kol + K1;
  Kol.PrintAll();
  // Kol.PrintAll();

  return 0;
}
