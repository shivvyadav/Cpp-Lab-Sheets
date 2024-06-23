/*Write a class that can store Department ID and Department Name with constructors to initialize its members.
Write destructor member in the same class and display the message "Object n goes out of the scope". Your program should be made such that it should show the order of constructor and destructor invocation.*/

#include <iostream>
#include <cstring>
using namespace std;

class department
{
private:
    int id;
    string name;

public:
    department(int a, string b)
    {
        id = a;
        name = b;
        cout << "Constructor call for object " << name << " having id " << id << endl;
    }
    ~department()
    {
        cout << "Object " << id << " goes out of the scope " << endl;
    }
};

int main()
{
    department depart1(1, "Grocery"); // In C++ objects are destroyed in reverse order
    department depart2(2, "Mart");    // when they goes out of the so destructor of 3 is called likewise for 2 & 1
    department depart3(3, "Mall");

    return 0;
}