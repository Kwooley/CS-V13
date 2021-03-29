#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    do
    {
        cout << "Enter three numbers(0-100) : ";
        cin >> num1 >> num2 >> num3;
    } while ((num1 < 0) || (num1 > 100) ||
             (num2 < 0) || (num2 > 100) ||
             (num3 < 0) || (num3 > 100));
    cout << "Your numbers are " << num1 << "\t" << num2 << "\t" << num3 << endl;

    if (num1 == num2)
    {
        if (num1 == num3)
            cout << " All numbers are the same\n";
        else
            cout << num1 << " and " << num2 << " are same \n";
    }
    else
    {
        if (num1 == num3)
            cout << num1 << " and " << num3 << " are same \n";
        else if (num2 == num3)
            cout << num2 << " and " << num3 << " are same \n";
        else
            cout << num1 << " " << num2 << " and " << num3 << " are distinct \n";
    }
}