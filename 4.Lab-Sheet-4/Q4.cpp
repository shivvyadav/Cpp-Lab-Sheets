/*Assume that one constructor initializes data member say num_vehicle, hour, and rate. There should be a 10% discount if num_vehicle exceeds 10. Display the total charge. Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor).*/

#include <iostream>
using namespace std;

class parking
{
private:
    int num_vechile;
    float hour;
    int rate;

public:
    parking(int num, float hr, float R)
    {
        num_vechile = num;
        hour = hr;
        if (num_vechile > 10)
        {
            rate = R * 0.1;
        }
        else
        {
            rate = R;
        }
    }
    parking(parking &copy)
    {
        num_vechile = copy.num_vechile;
        hour = copy.hour;
        rate = copy.rate;
    }
    float totalCharge()
    {
        return hour * rate;
    }
    void display()
    {
        cout << "No of vechiles :" << num_vechile << endl;
        cout << "charged hour :" << hour << endl;
        cout << "rate per hour :" << rate << endl;
        cout << "Total charge for parking :" << totalCharge() << endl;
    }
};

int main()
{
    int num;
    cout << "Enter the no of vechiles :";
    cin >> num;
    parking vechile1(num, 3.5, 100);
    cout << "details for main object :" << endl;
    vechile1.display();

    parking vechile2(vechile1);
    cout << "details for copied object :" << endl;
    vechile2.display();

    return 0;
}