/*Assume that you want to check whether the number is prime or not.
 Write a program that asks for numbers repeatedly. When it finishes checking a number,
 the program asks if the user wants to do another calculation. The response can be 'y' or 'n'.
 Don't forget to use the object-oriented concept.*/

#include <iostream>
#include <cstring>
using namespace std;

class prime
{
    int num;

public:
    void getData(int n)
    {
        num = n;
    }
    void check()
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                cout << num << " is not a prime number " << endl;
                break;
            }
            else
            {
                cout << num << " is  a prime number " << endl;
            }
        }
    }
};
int main()
{
    prime p;
    int n;
    char str;

    do
    {
        cout << " Enter a number:";
        cin >> n;
        p.getData(n);
        p.check();
        cout << " Do you want another calculation?(y/Y) " << endl;
        cin >> str;
    } while (str == 'y' || str == 'Y');

    return 0;
}