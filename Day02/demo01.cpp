#include <iostream>
// use a structure called as Time to accept and print time
// example in cpp
//by default in struct All Data Member and Member Functions are Public
//by default in class All data member and member functions are Privet
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