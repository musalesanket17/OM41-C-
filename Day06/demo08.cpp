#include <iostream>
using namespace std;

class Parent //(Base class)
{
protected:
    int property1;
    int property2;

    void printparent()
    {
        cout << property1 << property2 << endl;
    }
};

//(Derived class)
class Child : Parent // Inheritance
{
public:
    int property3;

    void printChild()
    {
        cout << property1 << property2 << property3 << endl;
    }
};

int main()
{
    Parent p1;
    p1.property1;
    p1.property2;
    return 0;
}