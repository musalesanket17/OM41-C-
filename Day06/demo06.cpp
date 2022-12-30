#include <iostream>
using namespace std;

class Point
{
private:
    int x_axis;
    const int y_axis;

public:
    Point() : y_axis(1)
    {
    }
    Point(int x_axis, int y_axis) : y_axis(y_axis)
    {
        this->x_axis = x_axis;
    }

    void setX_axis(int x_axis)
    {
        this->x_axis = x_axis;
    }

    void printPoint() const
    {
        cout << "Point = (" << this->x_axis << "," << this->y_axis << ")" << endl;
    }
};

int main()
{
    // constant object
    const Point p1(1, 2);
    p1.printPoint();

    // if you make your object as constant then it can call only
    // constant memeber functions
    // It cannot call non constant member functions
    // p1.setX_axis(2);//Not allowed
    return 0;
}