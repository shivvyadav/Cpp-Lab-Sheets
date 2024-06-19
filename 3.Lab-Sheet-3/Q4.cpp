/*Write a program with classes to represent a circle, rectangle, and triangle.
Each class should have data members to represent the actual objects and member functions to read
and display objects, find perimeter and area of the objects, and other useful functions.
Use the classes to create objects in your program.*/

#include <iostream>
#include <cmath>
using namespace std;
class circle
{
private:
    float radius;

public:
    void setData()
    {
        cout << "Enter the radius :";
        cin >> radius;
    }
    void display()
    {
        cout << "radius of circle is :" << radius << endl;
    }
    float perimeter()
    {
        return 2 * M_PI * radius;
    }
    float area()
    {
        return M_PI * radius * radius;
    }
};
class rectangle
{
private:
    float l, b;

public:
    void setData()
    {
        cout << "Enter the length and breadth of rectangle :";
        cin >> l >> b;
    }
    void display()
    {
        cout << "Length of rectangle :" << l << endl;
        cout << "Breadth of rectangle :" << b << endl;
    }
    float perimeter()
    {
        return 2 * (l * b);
    }
    float area()
    {
        return l * b;
    }
};
class triangle
{
private:
    float a, b, c;

public:
    void setData()
    {
        cout << "Enter the sides of triangle :" << endl;
        cin >> a >> b >> c;
    }
    void display()
    {
        cout << "sides of triangle are :" << a << "," << b << "and" << c << endl;
    }
    float perimeter()
    {
        return a + b + c;
    }
    float area()
    {
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main()
{
    circle C;
    rectangle R;
    triangle T;

    C.setData();
    C.display();
    cout << "perimeter of circle:" << C.perimeter() << endl
         << "area of circle:" << C.area() << endl;

    R.setData();
    R.display();
    cout << "perimeter of circle:" << C.perimeter() << endl
         << "area of circle:" << C.area() << endl;

    T.setData();
    T.display();
    cout << "perimeter of circle:" << C.perimeter() << endl
         << "area of circle:" << C.area() << endl;

    return 0;
}