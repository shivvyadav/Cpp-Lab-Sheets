/*Write a program that displays the current monthly salary of chief executive officer, 
information officer, and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are
Chief executive officer Rs. 35000/m
Information officer Rs. 25000/m
System analyst Rs. 24000/m
Programmer Rs. 18000/m
Make a function that takes two arguments; one salary and the other increment. Use proper default argument.*/

#include <iostream>
#include <cstring>
using namespace std;
struct employee
{
    float salary;
    float increment;
    string position;
};
void netPayment(employee &ep)
{
    ep.salary =ep.salary+ (ep.salary * ep.increment / 100);
    cout << "Increased Salary of " << ep.position << " is: " << ep.salary << endl;
}

int main()
{
    employee ceo = {35000, 9, "Chief Executive Officer"};
    employee info = {25000, 10, "Information Officer"};
    employee sysAnalyst = {24000, 12, "System Analyst"};
    employee prog = {18000, 12, "Programmer"};
    netPayment(ceo);
    netPayment(info);
    netPayment(sysAnalyst);
    netPayment(prog);
    return 0;
}