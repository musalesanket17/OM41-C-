#include <iostream>
using namespace std;

class Point
{
private:
    int *xptr;
    int *yptr;

public:
    Point()
    {
        cout << "Parameterless Ctor" << endl;
        xptr = new int;
        yptr = new int;
        *xptr = 1;
        *yptr = 1;
    }

    Point(int x_axis, int y_axis)
    {
        cout << "Parameterized Ctor" << endl;
        xptr = new int;
        yptr = new int;
        *xptr = x_axis;
        *yptr = y_axis;
    }
    void printPoint()
    {
        cout << "Point = (" << *xptr << "," << *yptr << ")" << endl;
    }

    void setX_axis(int x_axis)
    {
        *xptr = x_axis;
    }

    Point(Point &p2)
    {
        cout << "Copy Ctor" << endl;
        xptr = new int;
        yptr = new int;
        *xptr = *p2.xptr;
        *yptr = *p2.yptr;
    }

    ~Point()
    {
        delete xptr;
        delete yptr;
        xptr = NULL;
        yptr = NULL;
    }
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