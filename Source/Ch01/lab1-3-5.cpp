#include    <iostream>
#include    <iomanip>
using namespace std;

int main()
{
    const int   Num = 5;
    int     n1, n2, n3, n4, n5;
    int     sum;
    float   avg;
    n1 = 28;
    n2 = 32;
    n3 = 37;
    n4 = 24;
    n5 = 33;
    sum = n1 + n2 + n3 + n4 + n5;
    avg = sum / static_cast<float>(Num) ;

    cout << " Sum : " << sum  << endl;
    cout << " Avg : " << setprecision(3) << fixed << avg << endl;
}