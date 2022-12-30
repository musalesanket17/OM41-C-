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
    }
    Point(int x_axis, int y_axis)
    {
        this->x_axis = x_axis;
        this->y_axis = y_axis;
    }

    void printPoint()
    {
        cout << "Point = (" << this->x_axis << "," << this->y_axis << ")" << endl;
    }
    friend Point operator+(Point &p1, Point &p2);
};

Point operator+(Point &p1, Point &p2)
{
    Point temp;
    temp.x_axis = p1.x_axis + p2.x_axis;
    temp.y_axis = p1.y_axis + p2.y_axis;
    return temp;
}

int main()
{
    Point p1(1, 2);
    p1.printPoint();

    Point p2(2, 3);
    p2.printPoint();
    // int num1 = 10, num2 = 20;
    // int result = num1 + num2;
    Point p3 = p1 + p2;
    p3.printPoint();

    return 0;
}