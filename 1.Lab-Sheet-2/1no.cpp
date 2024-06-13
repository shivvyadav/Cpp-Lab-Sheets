// WAp to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2004 by function. Pass the structure to the function

#include <iostream>
using namespace std;

struct date
{
    int year, month, day;
};

void funcDate(date &D)
{
    cout << D.month << "/" << D.day << "/" << D.year << endl;
}

int main()
{
    date D;
    D.year = 2002;
    D.month = 02;
    D.day = 18;

    funcDate(D);
    return 0;
}