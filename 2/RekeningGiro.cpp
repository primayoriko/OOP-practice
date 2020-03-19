#include "RekeningGiro.h"
using namespace std;

RekeningGiro::RekeningGiro(double x, double y) : Rekening(x)
{
	sukuBunga = y;
	if (sukuBunga < 0)
		sukuBunga = 0;
}
void RekeningGiro::setSukuBunga(double x)
{
	sukuBunga = x;
}
double RekeningGiro::getSukuBunga() const
{
	return sukuBunga;
}

// Member Function
// Bunga dihitung dari saldo dikali suku bunga
double RekeningGiro::hitungBunga()
{
	return Rekening::getSaldo() * getSukuBunga();
}
