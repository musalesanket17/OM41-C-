#include <iostream>
using namespace std;

class Point
{
protected:
    int x_axis;
    int y_axis;

public:
    void acceptpoint() // Point * const this
    {
        cout << "Enter x and y axis values = ";
        cin >> this->x_axis >> this->y_axis;
    }

    void printPoint()
    {
        cout << "Point = (" << this->x_axis << "," << y_axis << ")" << endl;
    }
};

int main()
{
    Point p1;
    p1.acceptpoint(); // acceptpoint(&p1)
    p1.printPoint();  // printPoint(&p1)

    p1.x_axis;

    Point p2;
    p2.acceptpoint(); // acceptpoint(&p2)
    p2.printPoint();  // printPoint(&p2)
    return 0;
}