/*Write a program that illustrates the following relationship and comment on them.
i) const_object.non_const_mem_function
ii) const_object.const_mem_function
iii) non_const_object.non_const_mem_function
iv) non_const_object.const_mem_function*/

#include <iostream>
using namespace std;
class relation
{
private:
public:
    void nonConstMember()
    {
        cout << "Non const member function is being called." << endl;
    }
    void constMember() const
    {
        cout << "const member function is being called." << endl;
    }
};

int main()
{
    const relation constObject;
    relation nonConstObject;

    /*constObject.nonConstMember();  -->show error cause non const memb tries to change the state of constant object which is impossible*/
    constObject.constMember();

    nonConstObject.constMember();

    nonConstObject.nonConstMember();

    return 0;
}