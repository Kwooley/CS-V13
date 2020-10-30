#include <iostream>
using namespace std;

void swapTwoValues(int &n1, int &n2);
void swapTwoValues(float &f1, float &f2);

int main()
{
    int intnum1, intnum2;
    float fnum1, fnum2;
    int choice;

    do
    {
        cout << "Enter your choice: 1. Swap values with integer values 2. Swap values with floating point values 3. Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter two integer numbers: ";
            cin >> intnum1 >> intnum2;
            cout << "Your input is: " << intnum1 << "\t" << intnum2 << endl;
            swapTwoValues(intnum1, intnum2);
            cout << "Your input was swapped: " << intnum1 << "\t" << intnum2 << endl;
            break;
        case 2:
            cout << "Enter two floating point numbers: ";
            cin >> fnum1 >> fnum2;
            cout << "Your input is: " << fnum1 << "\t" << fnum2 << endl;
            swapTwoValues(fnum1, fnum2);
            cout << "Your input was swapped: " << fnum1 << "\t" << fnum2 << endl;
            break;
        default:
            cout << "Program exit";
            exit(0);
        }
    } while (1);
}
void swapTwoValues(int &n1, int &n2)
{
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}
void swapTwoValues(float &f1, float &f2)
{
    float tmp;
    tmp = f1;
    f1 = f2;
    f2 = tmp;
}