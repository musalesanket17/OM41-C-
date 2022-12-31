#include <iostream>
using namespace std;

class A
{
public:
    int num1;
    void printA()
    {
        cout << num1 << endl;
    }
};

class B : virtual public A
{
public:
    int num2;
    void printB()
    {
        cout << num1 << num2 << endl;
    }
};

class C : virtual public A
{
public:
    int num3;
    void printC()
    {
        cout << num1 << num3 << endl;
    }
};

class D : public B, public C
{
public:
    int num4;
    void printD()
    {
        cout << num1 << num2 << num3 << num4 << endl;
    }
};

int main()
{

    return 0;
}