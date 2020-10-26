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
    MyClass mc1, mc2;
    mc1.member_value = 2;
    cout << "The value of mc1: " << mc1.member_value << endl;
    cout << "The value of mc1: " << mc2.member_value << endl;
}
