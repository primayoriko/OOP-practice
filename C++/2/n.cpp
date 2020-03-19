#include <bits/stdc++.h>

using namespace std;

class A
{
public:
    A(int a)
    {
        numA = a;
    }
    virtual int getValue()
    {
        return numA;
    }
    int getNetValue()
    {
        return numA;
    }

protected:
    int numA;
};

class B : public A
{
public:
    B(int a, int b) : A(a)
    {
        numB = b;
    }
    int getValue()
    {
        return numB;
    }
    int getNetValue()
    {
        return numA + numB;
    }

private:
    int numB;
};

int funcA(A x)
{
    return x.getValue();
}

int funcB(B x)
{
    return x.getValue();
}

int funcA_net(A x)
{
    return x.getNetValue();
}

int funcB_net(B x)
{
    return x.getNetValue();
}

int funcRefA(A &x)
{
    return x.getValue();
}

int funcRefB(B &x)
{
    return x.getValue();
}
int funcRefA_net(A &x)
{
    return x.getNetValue();
}
int funcRefB_net(B &x)
{
    return x.getNetValue();
}
int funcPtrA(A *x)
{
    return x->getValue();
}
int funcPtrB(B *x)
{
    return x->getValue();
}
int funcPtrA_net(A *x)
{
    return x->getNetValue();
}
int funcPtrB_net(B *x)
{
    return x->getNetValue();
}

int main()
{
    A object1(0);
    B object2(1, 2);
    A *object3 = new B(2, 4);
    B *object4 = new B(3, 6);
    /*cout << funcA(object1) << endl;
    cout << funcA(*object3) << endl;
    cout << funcA(*object4) << endl;
    cout << funcB(object2) << endl;
    cout << funcB(*object4) << endl;*/
    /*cout << funcPtrA(&object1) << endl;
    cout << funcPtrA(&object2) << endl;
    cout << funcPtrA(object3) << endl;
    cout << funcPtrA(object4) << endl;
    cout << funcRefA(object1) << endl;
    cout << funcRefA(object2) << endl;
    cout << funcRefA(*object3) << endl;
    cout << funcRefA(*object4) << endl;*/
    //cout << funcPtrB(&object2) << endl;
    //cout << funcRefB(object2) << endl;
    /*cout << funcA_net(object1) << endl;
    cout << funcA_net(*object3) << endl;
    cout << funcA_net(*object4) << endl;
    cout << funcB_net(object2) << endl;
    cout << funcB_net(*object4) << endl;*/
    cout << funcPtrA_net(&object1) << endl;
    cout << funcPtrA_net(&object2) << endl;
    cout << funcPtrA_net(object3) << endl;
    cout << funcPtrA_net(object4) << endl;
    cout << funcRefA_net(object1) << endl;
    cout << funcRefA_net(object2) << endl;
    cout << funcRefA_net(*object3) << endl;
    cout << funcRefA_net(*object4) << endl;
    //cout << funcPtrB_net(&object2) << endl;
    //cout << funcRefB_net(object2) << endl;
    return 0;
}