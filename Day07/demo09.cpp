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

int main()
{
    Rectangle rect;
    rect.acceptData();
    rect.calculateArea();

    Circle c;
    c.acceptData();
    c.calculateArea();
}