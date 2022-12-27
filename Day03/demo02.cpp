#include <iostream>
using namespace std;

class Point
{
private:
    int x_axis;
    int y_axis;

public:
    void acceptpoint()
    {
        cout << "Enter x and y axis values = ";
        cin >> x_axis >> y_axis;
    }

    void printPoint()
    {
        cout << "Point = (" << x_axis << "," << y_axis << ")" << endl;
    }
};

int main()
{
    Point p1;
    p1.acceptpoint();
    p1.printPoint();

    Point p2;
    p2.acceptpoint();
    p2.printPoint();
    return 0;
}