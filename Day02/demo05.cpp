#include <iostream>

int num1 = 10; // global namespace scope

namespace na
{
    int num1 = 20;
    namespace nb
    {
        int num1 = 40;
    }
}

int main()
{
    printf("value of num1 from global scope = %d\n", ::num1);
    printf("value of num1 from na namespace = %d\n", na::num1);
    printf("value of num1 from nb namespace = %d\n", na::nb::num1);

    return 0;
}