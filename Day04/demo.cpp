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
        this->x_axis = 1;
        this->y_axis = 1;
    }

    // Parameterized Ctor
    Point(int x, int y)
    {
        cout << "Inside Parameterized Constructor" << endl;
        this->x_axis = x;
        this->y_axis = y;
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
    Point p1;
    p1.printPoint();

    Point p2(2, 2);
    p2.printPoint();
    return 0;
}