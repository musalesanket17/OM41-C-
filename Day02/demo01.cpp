#include <iostream>
// use a structure called as Time to accept and print time
// example in cpp

struct Time
{
private:
    int hrs;
    int mins;

public:
    void acceptTime()
    {
        printf("Enter hrs and mins = ");
        scanf("%d%d", &hrs, &mins);
    }

    void printTime()
    {
        printf("Time = %d : %d", hrs, mins);
    }
};

int main()
{
    struct Time t1;
    t1.acceptTime();
    // t1.hrs = 11; // not allowed
    t1.printTime();

    return 0;
}