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
 
    Point operator+(Point &ref)
    {
        Point temp;
        // temp-> p3
        // *this -> p1
        //  &ref -> p2
        // temp.x_axis = this->x_axis + ref.x_axis;
        temp.y_axis = this->y_axis + ref.y_axis;
        return temp;
    }
};

int main()
{
    Point p1(1, 2);
    p1.printPoint();

    Point p2(2, 3);
    p2.printPoint();
    // int num1 = 10, num2 = 20;
    // int result = num1 + num2;
    Point p3 = p1 + p2; // p1.operator+(p2)
    p3.printPoint();

    Point p4 = p1 + p2 + p3;
    p4.printPoint();

    return 0;
}