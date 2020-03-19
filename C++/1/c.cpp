#include <bits/stdc++.h>
#include "Complex.h"
using namespace std;

int main()
{
    Complex d(2, 3);
    Complex c(d);
    const Complex v = d + c;
    Complex r = v;
    cout << r.getReal();
}