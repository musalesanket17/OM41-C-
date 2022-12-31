#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void acceptData() = 0;
    virtual void calculateArea() = 0;
};

class Rectangle : public Shape
{
private:
    int length;
    int breadth;

public:
    void acceptData()
    {
        cout << "Enter lenghth and breadth = ";
        cin >> this->length >> this->breadth;
    }
    void calculateArea()
    {
        cout << "Area of rectangle = " << this->length * this->breadth << endl;
    }
};

class Circle : public Shape
{
private:
    int radius;

public:
    void acceptData()
    {
        cout << "Enter radius = ";
        cin >> this->radius;
    }
    void calculateArea()
    {
        cout << "Area of circle = " << 3.14 * this->radius * this->radius << endl;
    }
};

class Square : public Shape
{
private:
    int side;

public:
    void acceptData()
    {
        cout << "Enter side = ";
        cin >> this->side;
    }
    void calculateArea()
    {
        cout << "Area of Square = " << this->side * this->side << endl;
    }
};

int main()
{
    int choice;
    Shape *sptr = NULL;
    do
    {
        cout << "1. Area of Rectangle" << endl;
        cout << "2. Area of Circle" << endl;
        cout << "3. Area of Square" << endl;
        cout << "Enter choice = " << endl;
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Thank you for using our app..:)" << endl;
            break;
        case 1:
            sptr = new Rectangle;
            break;
        case 2:
            sptr = new Circle;
            break;
        case 3:
            sptr = new Square;
            break;
        default:
            cout << "Wrong input .. :(" << endl;
            break;
        }
        if (sptr != NULL)
        {
            sptr->acceptData();
            sptr->calculateArea();
            delete sptr;
            sptr = NULL;
        }

    } while (choice != 0);
}