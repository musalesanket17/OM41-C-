#include <iostream>
using namespace std;
// Reference concept
int main()
{
    int num1 = 10;
    int &ref = num1;

    cout << "By using num1" << endl;
    cout << "Value of num1 = " << num1 << endl;   // 10
    cout << "Addres of num1 = " << &num1 << endl; // address of num1

    cout << "By using ref" << endl;
    cout << "Value of ref = " << ref << endl;   // 10
    cout << "Addres of ref = " << &ref << endl; // address of num1

    // value of num1 using ref
    cout << "Value of num1 using ref = " << ref << endl;
    return 0;
}