#include <iostream>

int num1 = 10; // global namespace scope
namespace na
{
    int num2 = 20;
}

int main()
{
    int num3 = 30;

    printf("value of num1 = %d\n", ::num1);
    printf("value of num2 = %d\n", na::num2);
    printf("value of num3 = %d\n", num3);
    return 0;
}