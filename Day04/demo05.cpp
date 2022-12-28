#include <iostream>
using namespace std;
// Pointer concept
int main()
{
    int num1 = 10;
    int *ptr = &num1;

    cout << "By using num1" << endl;
    cout << "Value of num1 = " << num1 << endl;   // 10
    cout << "Addres of num1 = " << &num1 << endl; // address of num1

    cout << "By using ptr" << endl;
    cout << "Value of ptr = " << ptr << endl;   // address of num1
    cout << "Addres of ptr = " << &ptr << endl; // address of ptr

    // value of num1 using ptr
    cout << "Value of num1 using ptr = " << *ptr << endl;
    return 0;
}