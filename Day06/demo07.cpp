#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    void acceptDate()
    {
        cout << "Enter day,month & year = ";
        cin >> this->day >> this->month >> this->year;
    }
    void printDate()
    {
        cout << "Date = " << this->day << "/" << this->month << "/" << this->year << endl;
    }
};

class Person
{
private:
    char name;
    Date dob;

public:
    void acceptPerson()
    {
        cout << "Enter name = ";
        cin >> this->name;
        cout << "Enter birthdate";
        dob.acceptDate();
    }
    void printPerson()
    {
        cout << "Name = " << this->name << endl;
        dob.printDate();
    }
};

class Car
{
private:
    string model;
    Date manafucturing_date;
};

int main()
{
    Person p1;
    p1.acceptPerson();
    p1.printPerson();
    return 0;
}