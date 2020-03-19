#include <bits/stdc++.h>
#include "BunchOfKeys.hpp"
using namespace std;

BunchOfKeys::BunchOfKeys()
{
    n_keys = 0;
}

void BunchOfKeys::add()
{
    n_keys++;
}

void BunchOfKeys::shake()
{
    if (n_keys <= 1)
        cout << "Tidak terjadi apa-apa" << endl;
    else
    {
        for (int i = 0; i < n_keys; i++)
            cout << "krincing" << endl;
    }
}