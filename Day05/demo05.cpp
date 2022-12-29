#include <iostream>
using namespace std;
template <class X, class Y>
class Point
{
private:
    X x_axis;
    Y y_axis;

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
};

int main()
{
    Point<int, int> p1(1, 2);
    Point<double, double> p1(1.2, 2.5);
    Point<int, double> p1(1, 2.5);

    return 0;
}