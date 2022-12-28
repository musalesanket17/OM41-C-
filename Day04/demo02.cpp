#include <iostream>
using namespace std;
class Point
{
private:
    int x_axis;
    const int y_axis;
    const int z_axis;

public:
    Point() : y_axis(1), z_axis(1) // Ctor members initiaizer list
    {
        x_axis = 1;
    }

    Point(int x, int y, int z) : y_axis(y), z_axis(z)
    {
        x_axis = x;
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

    Point p2(2, 3, 4);
    p2.printPoint();
    return 0;
}