#include <iostream>

int num1 = 10; // global namespace scope

namespace na
{
    int num1 = 20;
}

int main()
{
    int num1 = 30;

    printf("value of num1 from global scope = %d\n", ::num1);
    printf("value of num1 from na namespace = %d\n", na::num1);
    printf("value of num1 from main = %d\n", num1);
    return 0;
}