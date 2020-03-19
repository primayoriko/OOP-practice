#include <bits/stdc++.h>
#include "KoleksiKendaraan.cpp"
using namespace std;

int main()
{
    KoleksiKendaraan arr;
    Kendaraan r;
    Bus x;
    Minibus y;
    Mobil z;
    z.PrintInfo();
    y.PrintInfo();
    x.PrintInfo();
    cout << y.BiayaSewa(11) << ' ' << y.calculateDiscount(11) << endl;
    (arr + r).PrintAll();
}