#include <iostream>
using namespace std;
// Function overloading

void sum(int num1, int num2) // sum_i_i
{
    cout << "Addtion of 2 int numbers = " << num1 + num2 << endl;
}

void sum(int num1, int num2, int num3) // sum_i_i_i
{
    cout << "Addtion of 3 int numbers = " << num1 + num2 + num3 << endl;
}

void sum(double num1, double num2) // sum_d_d
{
    cout << "Addtion of 2 double numbers = " << num1 + num2 << endl;
}

void sum(int num1, double num2) // sum_i_d
{
    cout << "Addtion of 1 int and 1 double number = " << num1 + num2 << endl;
}

void sum(double num1, int num2)
{
    cout << "Addtion of 1 double and 1 int number = " << num1 + num2 << endl;
}

int main()
{
    sum(10, 20); // sum_i_i
    sum(10, 20, 30);
    sum(10.20, 20.34);
    sum(10, 20.20);
    sum(20.30, 10);
    return 0;
}