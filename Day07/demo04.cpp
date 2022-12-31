#include <iostream>
using namespace std;
class Base
{
public:
    void f1()
    {
        cout << "Base::f1()" << endl;
    }
    void f2()
    {
        cout << "Base::f2()" << endl;
    }
};

class Derived : public Base
{
public:
    void f3()
    {
        cout << "Derived::f3()" << endl;
    }
};

int main()
{
    Base *bptr = new Base;
    bptr->f1();
    bptr->f2();

    Derived *dptr = new Derived;
    dptr->f1();
    dptr->f2();
    dptr->f3();

    delete bptr;
    delete dptr;
    return 0;
}