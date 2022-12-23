#include <iostream>
// use a structure called as Time to accept and print time
// example in cpp

struct Time
{
    int hrs;
    int mins;
};

void acceptTime(struct Time *tptr)
{
    printf("Enter hrs and mins = ");
    scanf("%d%d", &tptr->hrs, &tptr->mins);
}

void printTime(struct Time t1)
{
    printf("Time = %d : %d", t1.hrs, t1.mins);
}

int main()
{
    struct Time t1;
    acceptTime(&t1);
    printTime(t1);

    return 0;
}