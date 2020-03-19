#include <bits/stdc++.h>
#include "A.hpp"

using namespace std;

int main()
{
    A a('1');
    A b('2');
    A c(a);
    c = b;
    c.show();
}