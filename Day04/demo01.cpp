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
        cout << "Inside Parameteeless ctor" << endl;
    }
    Point(int x_axis, int y_axis)
    {
        cout << "Inside Parameterized ctor" << endl;
        this->x_axis = x_axis;
        this->y_axis = y_axis;
    }
    void acceptpoint()
    {
    }
    void printPoint()
    {
        cout << "Point = (" << this->x_axis << "," << this->y_axis << ")" << endl;
    }
};

int main()
{
    Point p1(2, 3); // parameterized
                    //    p1.printPoint();

    Point p2; // Parameterless

    Point p3; // Parameterless

    Point p4(1, 3); // parameterzied

    return 0;
}