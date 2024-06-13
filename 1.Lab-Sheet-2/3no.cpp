/*Define two namespaces: Square and Cube. In both the namespaces, 
define an integer variable named "num" and a function named "fun". 
The "fun" function in "Square" namespace, should return the square of an integer passed as an argument 
while the "fun" function in "Cube" namespace, should return the cube of an integer passed as an argument. 
In the main function, set the integer variables "num" of both the namespaces with different values.
 Then, compute and print the cube of the integer variable "num" of the "Square" namespace using
  the "fun" function of the "Cube" namespace and the square of the integer variable "num" of the "Cube" namespace using the "fun" function of the "Square" namespace.*/

#include <iostream>
using namespace std;

namespace Square
{
    int number;
    int fun(int n)
    {
        return n * n;
    }
}

namespace Cube
{
    int number;
    int fun(int n)
    {
        return n * n * n;
    }
}

int main()
{
    Square::number = 5;
    Cube::number = 3;

    // for cube using square's number
    cout << "Cube of Square's number (using Cube fun): " << Cube::fun(Square::number) << endl;

    // for square using cube's number
    cout << "Square of Cube's number (using Square fun): " << Square::fun(Cube::number) << endl;
    return 0;
}