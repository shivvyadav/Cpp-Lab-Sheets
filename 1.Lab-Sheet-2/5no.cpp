// Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the employee salary. Use inline function to display the net payment to the employee by the company.

#include <iostream>
using namespace std;

inline void NetPayment(float salary)
{
    float netPayment = salary - 0.1 * salary;
    cout << "Net payment to the employee : Rs." << netPayment << endl;
}
int main()
{
    float salary;
    cout << "Enter the salary: ";
    cin >> salary;
    NetPayment(salary);
    return 0;
}