#include <iostream>
using namespace std;

class Base
{
private:
    int num1;

protected://protected only access in derived classs obj. Other wise they behave like privet
    int num2;

public:
    int num3;

    void printBase()
    {
        cout << num1 << num2 << num3 << endl;
    }
    friend void myfriend();
};

void myfriend()
{
    Base b;
    cout << b.num1 << b.num2 << b.num3 << endl;
}

// mode of inheritance -> default mode of inheitance is private
class Derived : public Base
{
public:
    void printDerived()
    {
        cout << num1 << num2 << num3 << endl;
    }
};

class Derived2 : Derived
{
public:
    void printDerived()
    {
        cout << num1 << num2 << num3 << endl;
    }
};

int main()
{
    Base b;
    b.num1;
    b.num2;
    b.num3;

    Derived d;
    d.num1;
    d.num2;
    d.num3;
    return 0;
}