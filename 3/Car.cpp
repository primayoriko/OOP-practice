#include "Car.h"

Car::Car(Fuel t_fuel)
{
    fuel = t_fuel;
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

void Car::fillingFuel(Fuel t_fuel, int amount_in_liter)
{
    if (t_fuel != fuel)
    {
        throw t_fuel;
    }
    cout << "Berhasil isi bensin sebanyak " << amount_in_liter << " liter" << endl;
}

void Car::changeGear(int t_gear)
{
    if (t_gear > MAX_GEAR || t_gear < MIN_GEAR)
    {
        throw t_gear;
    }
    gear = t_gear;
    cout << "Berhasil mengubah gigi menjadi gigi " << t_gear << endl;
}

void Car::changeAcPower(int t_ac_power)
{
    if (t_ac_power > MAX_AC || t_ac_power < MIN_AC)
    {
        throw t_ac_power;
    }
    ac_power = t_ac_power;
    cout << "Berhasil mengubah power ac menjadi " << t_ac_power << endl;
}

void Car::start()
{
    if (on)
    {
        throw on;
    }
    on = true;
    cout << "Berhasil melakukan starter mobil" << endl;
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
    catch (bool on)
    {
        cout << "Mobil sudah menyala" << endl;
    }
    catch (int p)
    {
        cout << "Input angka diluar range" << endl;
    }
    catch (Fuel t_fuel)
    {
        cout << "Bensin tidak sesuai" << endl;
    }
}