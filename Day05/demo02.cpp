#include <iostream>
using namespace std;
class Arithmetic
{
private:
    int num1;
    int num2;

public:
    Arithmetic(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
    friend void sum(Arithmetic a1);
    friend void sub(Arithmetic a1);
    friend void mul(Arithmetic a1);
};

void takeInput()
{
    int num1, num2;
    cout << "Enter num1 and num2";
    cin >> num1 >> num2;
    Arithmetic a1(num1, num2);
    sum(a1);
    sub(a1);
    mul(a1);
}

void sum(Arithmetic a1)
{
    cout << "Addition = " << a1.num1 + a1.num2 << endl;
}

void sub(Arithmetic a1)
{
    cout << "Substraction = " << a1.num1 - a1.num2 << endl;
}

void mul(Arithmetic a1)
{
    cout << "Multiplication = " << a1.num1 * a1.num2 << endl;
}

int main()
{
    Arithmetic a1(1, 2);
    takeInput();
    return 0;
}