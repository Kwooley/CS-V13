#include <iostream>
using namespace std;

int main()
{
    int usernum1, usernum2, usernum3;

    do
    {
        cout << "Enter your three numbers\n";
        cin >> usernum1 >> usernum2 >> usernum3;
    } while (usernum1 < 0 || usernum1 > 99 || usernum2 < 0 || usernum2 > 99 || usernum3 < 0 || usernum3 > 99);

    if ((usernum1 == usernum2) || (usernum2 == usernum3) || (usernum1 == usernum3))
        cout << "There are duplicated numbers\n";
    else
        cout << "There is no duplicated number\n";
}