#include <iostream>
using namespace std;

// function Template

// template <typename T>
// void sum(T num1, T num2)
// {
//     cout << "Addition = " << num1 + num2 << endl;
// }

template <typename X, typename Y>
void sum(X num1, Y num2)
{
    cout << "Addition = " << num1 + num2 << endl;
}

int main()
{
    sum(10, 20);
    sum(10.20, 20.33);
    sum(10, 20.20);
    sum(20.34, 10);

    return 0;
}