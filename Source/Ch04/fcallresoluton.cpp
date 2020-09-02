#include    <iostream>
using namespace std;

int     f(double, double);

int main()
{
    f(10.10, 20.20);   
    f(10,20);       
    f(10.10, 20);   
}

int     f(double n1, double n2)
{
    cout << " Call (double, double)\n";
    return 0;
}