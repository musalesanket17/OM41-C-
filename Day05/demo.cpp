#include <iostream>
using namespace std;

class Point
{
private:
    int x_axis;
    int y_axis;

public:
    Point()
    {
        cout << "Parameterless Ctor" << endl;
        this->x_axis = 1;
        this->y_axis = 1;
    }

    Point(int x_axis, int y_axis)
    {
        cout << "Parameterized Ctor" << endl;
        this->x_axis = x_axis;
        this->y_axis = y_axis;
    }
    void printPoint()
    {
        cout << "Point = (" << this->x_axis << "," << this->y_axis << ")" << endl;
    }

    void setX_axis(int x_axis)
    {
        this->x_axis = x_axis;
    }

    // Point(Point &p2)
    // {
    //     cout << "Copy ctor" << endl;
    //     // BL -> You have to write
    //     this->x_axis = p2.x_axis;
    //     this->y_axis = p2.y_axis;
    // }
};

int main()
{
    Point p1;
    p1.printPoint();

    Point p2(2, 3);
    p2.printPoint();

    Point p3 = p2; // Default copy ctor
    p3.printPoint();

    cout << "After changing the value of x_axis in p3" << endl;
    p3.setX_axis(4);
    p3.printPoint();
    p2.printPoint();
    return 0;
}