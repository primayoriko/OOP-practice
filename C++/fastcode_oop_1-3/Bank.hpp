#ifndef __BANK_HPP__
#define __BANK_HPP__

#include <iostream>
#include "Account.hpp"

// Definisikan TransactionFailedException di sini
// TransactionFailedException merupakan anak dari kelas BaseException, memiliki:
// - exc bertipe BaseException*
// - constructor menerima argumen exc
// - printMessage yang menuliskan "Transaksi gagal dengan pesan kesalahan:\n"
//   diikuti dengan pemanggilan exc->printMessage()

class TransactionFailedException : public BaseException
{
private:
    BaseException *exc;

public:
    TransactionFailedException(BaseException *_exc)
    {
        exc = _exc;
    }
    void printMessage()
    {
        cout << "Transaksi gagal dengan pesan kesalahan:\n";
        exc->printMessage();
    }
};

// Definisikan AccountNotFoundException di sini
// AccountNotFoundException merupakan anak dari kelas BaseException, memiliki:
// - number bertipe string
// - constructor menerima argumen number
// - printMessage yang menuliskan "Tidak ditemukan rekening dengan nomor {number}\n"

class AccountNotFoundException : public BaseException
{
private:
    string num;

public:
    AccountNotFoundException(string number)
    {
        num = number;
    }
    void printMessage()
    {
        cout << "Tidak ditemukan rekening dengan nomor " << num << "\n";
    }
};

class Bank
{
private:
    Account *accounts;
    static const int maxEl = 100;

public:
    Bank()
    {
        this->accounts = new Account[Bank::maxEl];
    }

    ~Bank()
    {
        delete[] this->accounts;
    }

    Account &getAccount(int idx)
    {
        return this->accounts[idx];
    }

    int findAccountIdx(string number)
    {
        // Mengembalikan indeks rekening yang memiliki nomor number
        int idx = -1;
        for (int i = 0; i < Bank::maxEl; i++)
        {
            if (this->accounts[i].getNumber() == number)
            {
                idx = i;
            }
        }
        if (idx == -1)
        {
            AccountNotFoundException *exc = new AccountNotFoundException(number);
            throw exc;
        }
        return idx;
        // TODO: Melempar AccountNotFoundException* bila tidak ditemukan
        //       rekening dengan nomor number
    }

    void transfer(string fromNumber, string toNumber, int amount)
    {
        // Mengirimkan uang sebanyak amount dari account dengan nomor
        // fromNumber ke account dengan nomor toNumber
        Account &fromAccount = this->accounts[this->findAccountIdx(fromNumber)];
        Account &toAccount = this->accounts[this->findAccountIdx(toNumber)];

        try
        {
            Account &fromAccount = this->accounts[this->findAccountIdx(fromNumber)];
            Account &toAccount = this->accounts[this->findAccountIdx(toNumber)];
            fromAccount.withdraw(amount);
            toAccount.add(amount);
        }
        catch (BaseException *exc)
        {
            TransactionFailedException *ex = new TransactionFailedException(exc);
            throw ex;
        }

        // TODO: Menambah balance dari account tujuan dengan method add
        //       dan mengurangi balance dari account asal dengan method withdraw.
        // TODO: Menangkap semua jenis Exception yang dilempar dan melempar TransactionFailedException*.
        //       Hint: jangan menangkap tiap jenis exception, manfaatkan BaseException.
        //       Jika transaksi gagal, PASTIKAN balance kedua rekening tidak ada yang
        //       berubah.
    }
};

#endif