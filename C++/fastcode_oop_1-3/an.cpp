#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int r;
    A();
    void f()
    {
        cout << "AAAA" << endl;
    }
};

class B : public A
{
public:
    B();
    virtual void f()
    {
        cout << "BBB" << endl;
    }
};

int main()
{
    B *g = new B();
    g->f();
}
