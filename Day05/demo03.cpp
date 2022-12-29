#include <iostream>
using namespace std;

class Point
{
private:
    int x_axis;
    int y_axis;
    static int counter;

public:
    Point(int x_axis, int y_axis)
    {
        counter++;
        this->x_axis = x_axis;
        this->y_axis = y_axis;
    }

    static void printCounter()
    {
        cout << "Total objects created = " << counter << endl;
    }

    void printPoint()
    {
        cout << "Point = (" << this->x_axis << "," << this->y_axis << ")" << endl;
    }
};

// initialize the static data member of your class
int Point::counter = 0;

int main()
{
    Point p1(1, 2);
    Point(3, 4);
    p1.printCounter();

    Point p2(5, 6);
    Point(7, 8);

    Point::printCounter();
    return 0;
}