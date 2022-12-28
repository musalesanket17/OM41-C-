#include <iostream>
using namespace std;
class Point
{
private:
    int x_axis;
    const int y_axis;

public:
    Point() : y_axis(1) // Ctor members initiaizer list
    {
        x_axis = 1;
    }

    Point(int x, int y) : y_axis(y)
    {
        x_axis = x;
    }

    void printPoint() const
    {
        // x_axis = 10; not allowed
        cout << "Point = (" << this->x_axis << "," << this->y_axis << ")" << endl;
    }
};

int main()
{
    Point p1;
    p1.printPoint(); // (1,1)

    Point p2(2, 3);
    p2.printPoint(); // (2,3);
    return 0;
}