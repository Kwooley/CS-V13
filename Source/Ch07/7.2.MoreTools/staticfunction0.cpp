#include <iostream>
using namespace std;

class MyClass
{
private:
    static int member_value;

public:
    static int getValue(void);
};
int MyClass::member_value = 1;
int MyClass::getValue(void)
{
    return member_value;
}

int main()
{
    cout << "The value of static variable : " << MyClass::getValue() << endl;
}
