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
    Base *bptr = new Derived; // upcasting
    bptr->f1();
    bptr->f2();
    // bptr->f3(); // NOt OK -> Object slicing
    Derived *dptr = (Derived *)bptr; // Downcasting
    dptr->f3();
    delete bptr;
    bptr = NULL;

    return 0;
}