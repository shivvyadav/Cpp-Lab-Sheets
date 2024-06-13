// Write a program using the function overloading that converts feet to inches. Use function with no argument, one argument and two arguments. Decide yourself the types of arguments. Use pass by reference in any one of the function above

#include <iostream>
using namespace std;

int feetToInches()
{
    int feet;
    cout << "Enter feet:";
    cin >> feet;
    return feet * 12;
};

int feetToInches(int feet)
{
    return feet * 12;
};

int feetToInches(int feet, int &inc)
{
    return feet * 12;
};

int main()
{

    int feet, inc;

    // with no arguments
    cout << "With no arguments,inches:" << feetToInches() << endl;

    // with one arguments
    feet = 5;
    cout << "With one arguments,inches:" << feetToInches(feet) << endl;

    // with two arguments
    feet = 3;
    inc = feetToInches(feet, inc);
    cout << "With two arguments,inches:" << inc << endl;

    return 0;
}