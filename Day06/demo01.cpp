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
            throw 4.5;

        cout << "Substarction = " << this->num1 - this->num2 << endl;
    }
};

int main()
{
    Arithmetic a1(10, 20);
    a1.sum();
    try
    {
        a1.sub();
    }
    catch (double error)
    {
        cout << "Substarction is not possible" << endl;
    }
    cout << "Thankyou for using my calculator ..:)" << endl;
    return 0;
}