#include <iostream>
#include "test.hpp"
using namespace std;

Vehicle::Vehicle() {this->fuel = 0;} Vehicle::~Vehicle(){} void Vehicle::addFuel(float fuel) {this->fuel += fuel;}void Vehicle::drive() {cout << "Driving ..." << endl;}


Car::Car() : Vehicle() {} Car::~Car(){} void Car::openDoor() {cout << "Door opened" << endl;}void Car::drive() {cout << "Use seatbelt" << endl;Vehicle::drive();}
