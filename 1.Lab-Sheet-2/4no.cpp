// Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by user by using return by reference.

#include <iostream>
using namespace std;

int &setLargerTemp(int &temp1, int &temp2)
{
    if (temp1 > temp2)
    {
        return temp1;
    }
    else
    {
        return temp2;
    }
}

int main()
{
    int temp1, temp2;
    cout << "Enter temp1 and Temp2 " << endl;
    cin >> temp1 >> temp2;

    int &largerTemp = setLargerTemp(temp1, temp2);
    cout << "The larger temperature is: " << largerTemp << endl;
    return 0;
}