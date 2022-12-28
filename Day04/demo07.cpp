#include <iostream>
using namespace std;
class Point
{
private:
    int x_axis;
    int y_axis;

public:
    // Parameterless Ctor
    Point()
    {
        cout << "Inside Parameterless Constructor" << endl;
    }

    // Parameterized Ctor
    Point(int x, int y)
    {
        cout << "Inside Parameterized Constructor" << endl;
    }

    // copy ctor
    Point(Point &ref)
    {
        cout << "Inside Copy ctor" << endl;
    }

    void printPoint()
    {
        cout << "Point = (" << this->x_axis << "," << this->y_axis << ")" << endl;
    }
};

int main()
{
    Point p1;       // Parameterless Ctor
    Point p2(2, 3); // Parameterized ctor
    Point p3 = p2;  // Default Copy Ctor  -> p3.Point(p2)

    cout << "Address of p1 = " << &p1 << endl;
    cout << "Address of p2 = " << &p2 << endl;
    cout << "Address of p3 = " << &p3 << endl;
    return 0;
}