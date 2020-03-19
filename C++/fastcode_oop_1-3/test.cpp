// #include <bits/stdc++.h>
// using namespace std;

// class A
// {
// public:
//     int a, b, c;
//     A()
//     {
//         a = 0, b = 0, c = 0;
//     }
//     A(int p, int q, int r)
//     {
//         a = p;
//         b = q;
//         c = r;
//     }
//     // A(const A &A1)
//     // {
//     //     a = A1.a;
//     //     b = A1.b;
//     //     c = A1.c;
//     // }
//     // A operator=(A const &A2)
//     // {
//     //     A A3(A2);
//     //     return A3;
//     // }
// };

// class B : public A
// {
// public:
//     int d;
//     // B() : A()
//     // {
//     //     d = 0;
//     // }
//     // B(int p, int q, int r, int s)
//     // {
//     //     a = p;
//     //     b = q;
//     //     c = r;
//     //     d = s;
//     // }
// };

// class X
// {
// public:
//     void haha()
//     {
//         cout << "haha" << endl;
//     }
// };

// class Y : virtual public X
// {
// };

// class Z : virtual public X
// {
// };

// class XYZ : public Y, Z
// {
// };

// void oho(int s)
// {
//     s = 9;
// }

// class ehe
// {
// public:
//     int a;
// };

// int main()
// {
//     // B x(1, 2, 3, 4);
//     // cout << x.a << x.b << x.c << x.d << endl;
//     // B y(1, 2, 3);
//     // cout << y.a << y.b << y.c << y.d << endl;
//     // // XYZ z;
//     // z.haha();
//     // int r = 8;
//     // int &s = r;
//     // oho(s);
//     // cout << s;
//     ehe po;
//     po.a = 9;
//     cout << po.a << endl;
// }

#include <iostream>
using namespace std;

class A
{
public:
    virtual void show()
    {
        cout << "Hello form A \n";
    }
};
class B0 : virtual public A
{
public:
    void show() override
    {
        cout << "Hello form B0 \n";
    }
};
class B : virtual public B0
{
};

class C0 : virtual public A
{
public:
    void show() override
    {
        cout << "Hello form C0 \n";
    }
};
class C : virtual public C0
{
public:
    void show() override
    {
        cout << "Hello form C \n";
    }
};

class D : virtual public C, virtual public B
{
    // public:
    //   void show() override
    //   {
    //       cout << "Hello form D \n";
    //   }
};

int main()
{
    D object;
    object.show();
}