/*Write a program that has a class with a dynamically allocated character array as its data member.
One object should contain "Engineers are" and another should contain " Creatures of logic".
Member function join() should concatenate two strings by passing two objects as arguments.
Display the concatenated string through a member function. Use constructors to allocate and
initialize the data member. Also, write a destructor to free the allocated memory for the character array.
Make your own function for the concatenation of two strings.*/

#include <iostream>
#include <cstring>
using namespace std;

class stringOpera
{
private:
    char *arr;
    char *result;

public:
    stringOpera(const char *message)   //Even though programs runs if constant keyword is not used but
    {                                  //here C++ forbids to convert string constants into char*
        int length = strlen(message);
        arr = new char[length];
        strcpy(arr, message);
    }
    ~stringOpera()
    {
        delete[] arr;
    }

    void join(const stringOpera &str1, const stringOpera &str2)
    {
        int length = strlen(str1.arr) + strlen(str2.arr);
        result = new char[length];

        strcpy(result, str1.arr);
        strcat(result, str2.arr);

        cout << "Concatenated string :" << result << endl;
        delete[] result;
    }
};

int main()
{
    stringOpera str1("Engineers are");
    stringOpera str2(" Creatures of logic");
    stringOpera str3("");

    str3.join(str1, str2);

    return 0;
}