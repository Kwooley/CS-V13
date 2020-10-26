#include <iostream>
using namespace std;

class MyClass
{
public:
    static int member_value;
};
int MyClass::member_value = 1;
int main()
{
    MyClass::member_value = 10;
    cout << "The value of mc1: " << MyClass::member_value << endl;
}
