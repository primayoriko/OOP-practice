#include "RekeningTabungan.h"
using namespace std;

RekeningTabungan::RekeningTabungan(double x, double y) : Rekening(x)
{
	biayaTransaksi = y;
	if (y < 0)
		biayaTransaksi = 0;
}

// Getter, Setter
void RekeningTabungan::setBiayaTransaksi(double x)
{
	biayaTransaksi = x;
}
double RekeningTabungan::getBiayaTransaksi() const
{
	return biayaTransaksi;
}

// Member Function
// Panggil fungsi simpanUang dari parent class
// Kurangkan saldo dengan biaya transaksi
void RekeningTabungan::simpanUang(double x)
{
	Rekening::simpanUang(x - biayaTransaksi);
}

// Panggil fungsi tarikUang dari parent class
// Kurangkan saldo dengan biaya transaksi hanya jika penarikan uang berhasil
// Saldo mungkin saja menjadi negatif apabila setelah penarikan, saldo < biaya transaksi
// Kembalikan boolean yang mengindikasikan apakah uang berhasil ditarik atau tidak
bool RekeningTabungan::tarikUang(double x)
{
	bool y = Rekening::tarikUang(x);
	if (y)
		setSaldo(getSaldo() - getBiayaTransaksi());
	return y;
}
