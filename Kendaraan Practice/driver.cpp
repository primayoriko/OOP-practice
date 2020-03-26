#include<bits/stdc++.h>
#include "Kendaraan.hpp"
#include "Mobil.hpp"
#include "Minibus.hpp"
#include "Bus.hpp"
#include "KoleksiKendaraan.hpp"

using namespace std;

int main()
{
    Mobil car(1,2020,"PHD", "Fritz");
    Bus bus(1,2020,"PHD Bus", 10002412);
    Minibus smolbus(1,2020,"PHD Minibus");

    car.printInfo();
    bus.printInfo();
    smolbus.printInfo();

    cout<<car.biayaSewa(15)<<endl;
    cout<<bus.biayaSewa(15)<<endl;
    cout<<smolbus.biayaSewa(15)<<endl;

    KoleksiKendaraan k;
    k=k+(&car)+(&bus)+(&smolbus);
    k.printAll();

    Kendaraan kend;
    kend = car;
    kend.printInfo();
}