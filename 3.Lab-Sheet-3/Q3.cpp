/*Create a class called carpark that has int data member for car id, int data member for charge/hour,
and float data member for the parked time. Make functions to set data members and show the charges and
parked hours of the corresponding car id. Make functions for setting and showing the data members.
Member function should be called from other functions.*/

#include <iostream>
using namespace std;
class carpark
{
private:
    int id;
    int chargePerHour;
    float parkedTime;

public:
    void set(int a, int b, int c)
    {
        id = a;
        chargePerHour = b;
        parkedTime = c;
    }
    void show()
    {
        cout << "Car id :" << id << endl;
        cout << "Charged per hour :" << chargePerHour << endl;
        cout << "Parked time :" << parkedTime << endl;
        int d = netCharge();
        cout << "The net payment for charging is Rs. " << d << endl;
    }
    float netCharge()
    {
        return chargePerHour * parkedTime;
    }
};

int main()
{
    carpark car1, car2;
    car1.set(1, 550, 3.5);
    car1.show();

    car1.set(2, 650, 5.6);
    car1.show();

    return 0;
}