#include <bits/stdc++.h>
#include "Car.h"
using namespace std;

Car::Car(Fuel a)
{
    fuel = a;
    gear = 0;
    ac_power = 0;
    on = false;
}

Fuel Car::getFuel()
{
    return fuel;
}

int Car::getGear()
{
    return gear;
}

int Car::getAcPower()
{
    return ac_power;
}

bool Car::getOn()
{
    return on;
}

void Car::fillingFuel(Fuel F, int am)
{
    if (F != fuel)
    {
        throw F;
    }
    else
    {
        cout << "Berhasil isi bensin sebanyak " << am << " liter" << endl;
    }
}

void Car::changeGear(int t)
{
    if (t < MIN_GEAR || t > MAX_GEAR)
        throw t;
    else
    {
        cout << "Berhasil mengubah power ac menjadi " << t << endl;
        gear = t;
    }
}

void Car::changeAcPower(int t)
{
    if (t < MIN_AC || t > MAX_AC)
        throw t;
    else
    {
        cout << "Berhasil mengubah power ac menjadi " << t << endl;
        ac_power = t;
    }
}

void Car::start()
{
    if (on)
        throw on;
    else
    {
        on = true;
        cout << "Berhasil melakukan starter mobil" << endl;
    }
}

void Car::service(Fuel t_fuel, int amount_in_liter, int t_gear, int t_ac_power)
{
    try
    {
        start();
        fillingFuel(t_fuel, amount_in_liter);
        changeGear(t_gear);
        changeAcPower(t_ac_power);
    }
    catch (bool b)
    {
        cout << "Mobil sudah menyala" << endl;
    }
    catch (int t)
    {
        cout << "Input angka diluar range" << endl;
    }
    catch (Fuel F)
    {
        cout << "Bensin tidak sesuai" << endl;
    }
}