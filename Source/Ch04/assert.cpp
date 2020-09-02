// #define     NDEBUG
#include    <cassert>
#include    <iostream>
using namespace std;

int main()
{
    int     number;
    cout << "Enter your input\n";
    cin >> number;

    assert(number<10);

    cout << "number is less than 10\n";
}