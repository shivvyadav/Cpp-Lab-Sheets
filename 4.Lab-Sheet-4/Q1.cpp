/*Write a program that has a class to represent time. The class should have constructors to initialize
data members hour, minute, and second to 0 and to initialize them to values passed as arguments.
The class should have a member function to add time objects and return the result as a time object.
There should be functions to display time in 12-hour and 24-hour format.*/

#include <iostream>
using namespace std;

class time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    time(int hr, int min, int sec)
    {
        hours = hr;
        minutes = min;
        seconds = sec;
    }
    time add(time t2)
    {
        time res;
        res.seconds = seconds + t2.seconds;
        res.minutes = minutes + t2.minutes + res.seconds / 60;
        res.hours = hours + t2.hours + res.minutes / 60;

        res.seconds %= 60;
        res.minutes %= 60;
        return res;
    }

    void show12()
    {
        string format = (hours < 12) ? "AM" : "PM";
        int h = hours % 12;
        cout << "Time in 12-hour format is " << endl;
        cout << h << ":" << minutes << ":" << seconds << ":" << format << endl;
    }

    void show24()
    {
        cout << "time in 24 hour format is " << endl;
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main()
{
    time t1(7, 40, 44), t2(8, 50, 55);

    time t3 = t1.add(t2);
    t3.show12();
    t3.show24();

    return 0;
}