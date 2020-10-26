#include <iostream>
using namespace std;

class MyClass
{
public:
    int value = 1;
};

int main()
{
    MyClass mc1, mc2;
    mc1.value = 2;
    cout << "The value of mc1: " << mc1.value << endl;
    cout << "The value of mc1: " << mc2.value << endl;
}
