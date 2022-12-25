#include <iostream>

int num1 = 100;

namespace na
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    int num4 = 40;
    int num5 = 50;
    int num6 = 60;
}
using namespace na;
int main()
{
    int num2 = 200;
    printf("value of num1 from global =  %d\n", ::num1);
    printf("value of num1 =  %d\n", na::num1);
    printf("value of num2 from main=  %d\n", num2);
    printf("value of num2 =  %d\n", na::num2);
    printf("value of num3 =  %d\n", num3);
    printf("value of num4 =  %d\n", num4);
    printf("value of num5 =  %d\n", num5);
    printf("value of num6 =  %d\n", num6);
    return 0;
}