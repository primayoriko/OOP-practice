#include "Rekening.h"
using namespace std;

Rekening::Rekening(double x)
{
	if (x <= 0)
		saldo = 0;
	else
		saldo = x;
}

void Rekening::setSaldo(double x)
{
	saldo = x;
}

double Rekening::getSaldo() const
{
	return saldo;
}

// Member Function
// Tambahkan sejumlah nominal uang ke saldo
void Rekening::simpanUang(double x)
{
	saldo += x;
}

// Kurangkan sejumlah nominal uang dari saldo apabila saldo mencukupi (tidak negatif setelah dikurangkan)
// Kembalikan boolean yang mengindikasikan apakah uang berhasil ditarik atau tidak
bool Rekening::tarikUang(double x)
{
	if (saldo - x < 0)
	{
		return 0;
	}
	else
	{
		saldo -= x;
		return 1;
	}
}
