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

    void sum()
    {
        cout << "Addition = " << num1 + num2 << endl;
    }

    void sub()
    {
        if (this->num1 < this->num2)
            throw 1.3;

        cout << "Substarction = " << this->num1 - this->num2 << endl;
    }

    void div()
    {
        if (this->num2 == 0)
            throw 2;
        cout << "Division = " << this->num1 / this->num2 << endl;
    }
};

int main()
{
    Arithmetic a1(10, 0);
    a1.sum();
    try
    {
        a1.sub();
        a1.div();
    }
    catch (int error)
    {
        cout << "Division is not possible" << endl;
    }
    catch (...) // Generic catch block
    {
        cout << "Their is an error ...:(" << endl;
    }

    cout << "Thankyou for using my calculator ..:)" << endl;
    return 0;
}