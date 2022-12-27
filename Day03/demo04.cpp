#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    // Mutators
    void setReal(int real)
    {
        this->real = real;
    }

    // Inspectors
    int getReal()
    {
        return this->real;
    }

    // facilitator
    void accept()
    {
        cout << "Enter real and imag = ";
        cin >> this->real >> this->imag;
    }

    // facilitator
    void print()
    {
        cout << "Real = " << this->real << endl;
        cout << "Imag = " << this->imag << endl;
    }
};

int main()
{
    Complex c1;
    c1.accept();
    c1.print();

    // c1.real = 25;
    c1.setReal(25);
    cout << "Changed real value = " << c1.getReal() << endl;
    return 0;
}