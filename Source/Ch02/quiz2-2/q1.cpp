#include <iostream>
using namespace std;

int main()
{
    int usernum;

    do
    {
        cout << "Enter your numbers\n";
        cin >> usernum;
    } while (usernum < 0 || usernum > 99);

    if (usernum % 2 == 0)
        cout << "The number " << usernum << " is the even number\n";
    else
        cout << "The number " << usernum << " is the odd number\n";
}