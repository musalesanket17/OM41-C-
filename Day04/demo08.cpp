#include <iostream>
using namespace std;
// dynamic memory allocation
int main()
{
    int *ptr = new int; // dynamic memory allocation
    *ptr = 10;

    cout << "Address of dynamically allocated memory = " << ptr << endl;
    cout << "Address of ptr = " << &ptr << endl;
    cout << "Value at dynamically allocated memory = " << *ptr << endl;

    delete ptr;
    ptr = NULL;
    return 0;
}