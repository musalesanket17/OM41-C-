#include <iostream>
using namespace std;

class Time
{
private:
    // Data members
    int hrs;
    int mins;

public:
    // member functions -> facilitators
    void acceptTime()
    {
        cout << "Accept function called" << endl;
    }

    void printTime()
    {
        cout << "Print function called" << endl;
    }
};

int main()
{
    Time t1; // Object
    t1.acceptTime();
    t1.printTime();
    return 0;
}