/*Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale
and vice versa using the basic concept of class and object. Make separate classes for
Celsius and Fahrenheit which will have the private members that hold the temperature value
and make conversion functions in each class for conversion from one to another.
 For example, you need to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.*/
#include <iostream>
using namespace std;

class celsius
{
    float c1;

public:
    void setData(float celsiusTemp)
    {
        c1 = celsiusTemp;
    }
    float toFahrenheit()
    {
        return (c1 * 9 / 5) + 32;
    }
};

class fahrenheit
{
    float f1;

public:
    void setData(float fahrenheitTemp)
    {
        f1 = fahrenheitTemp;
    }
    float toCelsius()
    {
        return (f1 - 32) * 5 / 9;
    }
};

int main()
{
    celsius cel;
    fahrenheit fah;

    float celsiusTemp = 45.5;
    float fahrenheitTemp = 97.3;

    cel.setData(celsiusTemp);
    cout << celsiusTemp << " deg celsius is equal to " << cel.toFahrenheit() << " deg fahrenheit." << endl;

    fah.setData(fahrenheitTemp);
    cout << fahrenheitTemp << " deg fahrenheit is equal to " << fah.toCelsius() << " deg celsius." << endl;

    return 0;
}