#include <iostream>
using namespace std;

// Abstract class
class Base
{
public:
    void f1()
    {
        cout << "Base::f1()" << endl;
    }
    // pure virtual function
    virtual void f2() = 0;
};

class Derived : public Base
{
public:
    // function overriding
    void f2()
    {
        cout << "Derived::f2() Complete" << endl;
    }
    void f3()
    {
        cout << "Derived::f3()" << endl;
    }
};

int main()
{
    Base *bptr = new Derived; // upcasting
    bptr->f2();               // Late Binding

    delete bptr;
    bptr = NULL;

    return 0;
}