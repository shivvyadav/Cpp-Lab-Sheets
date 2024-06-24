/*Create a class with a data member to hold a "serial number" for each object created from the class. That is, the first object created will be numbered 1, the second 2, and so on by using the basic concept of static data members. Use static member function if it is useful in the program. Otherwise, make a separate program that demonstrates the use of static member function.*/

#include <iostream>
using namespace std;
class numbering
{
private:
    static int SN;

public:
    numbering()
    {
        SN++;
    }
    static int display()
    {
        return SN;
    }
};
int numbering::SN = 0;

int main()
{
    numbering first;
    cout << "Serial number of first object is " << numbering::display() << endl;

    numbering second;
    cout << "Serial number of first object is " << numbering::display() << endl;

    numbering third;
    cout << "Serial number of first object is " << numbering::display() << endl;

    return 0;
}