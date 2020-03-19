#include <iostream>

using namespace std;

class A
{
public:
    A(const char i = 0)
    {
        cout << "A::ctor" << endl;
        x = i;
    }
    A(const A &i)
    {
        cout << "A::cctor" << endl;
        x = i.x;
    }
    ~A()
    {
        cout << "A::dtor" << endl;
    }
    A &operator=(const A &i)
    {
        cout << "A::opr= " << endl;
        x = i.x;
        return *this;
    }
    void f()
    {
        cout << "A::f()" << endl;
    }

private:
    char x;
};

class B
{
public:
    B(const int n)
    {
        cout << "B::ctor" << endl;
        pa = new A[n];
        this->n = n;
    }
    B(const B &a)
    {
        cout << "B::cctor" << endl;
        n = a.n;
        pa = new A[n];
    }
    B &operator=(const B &b)
    {
        cout << "B::opr= " << endl;
        if (this != &b)
        {
            delete[] pa;
            n = b.n;
            pa = new A[n];
        }
        return *this;
    }
    virtual ~B()
    {
        cout << "B::dtor" << endl;
        delete[] pa;
    }
    virtual void f()
    {
        cout << "B::f()" << endl;
        for (int i = 0; i < n; i++)
        {
            pa[i].f();
        }
    }

private:
    A *pa;
    int n;
};

class C : public A, public B
{
public:
    C(const char n) : B(n)
    {
        cout << "C::ctor" << endl;
    }
    virtual ~C()
    {
        cout << "C::dtor" << endl;
    }
    virtual void f()
    {
        cout << "C::f()" << endl;
        A::f();
        B::f();
    }
};

int main()
{

    cout << "1: " << endl;
    A *pa;
    B *pb;
    C *pc = new C(3);

    cout << "2: " << endl;
    pa = pc;
    pb = pc;
    pa->f();
    pb->f();

    cout << "3: " << endl;
    pc->B::f();

    cout << "4: " << endl;
    delete pb;

    cout << "5: " << endl;
    C c1(2);
    C c2 = c1;

    cout << "6: " << endl;
    c2 = c1;

    cout << "0: " << endl;

    return 0;
}