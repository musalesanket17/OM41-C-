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
        cout << "Inside Parameterless ctor" << endl;
        this->x_axis = 1;
        this->y_axis = 1;
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

    // Destructor
    ~Point()
    {
        cout << "Inside Destructor" << endl;
        // printPoint();For testing call
    }
};

int main()
{
    Point p1;
    p1.printPoint(); //(1,1);

    Point p2(4, 5);
    p2.printPoint(); //(4,5);

    return 0;
}