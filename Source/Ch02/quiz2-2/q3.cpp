#include <iostream>
using namespace std;

int main()
{
    int begin, end;
    int flag;
    do
    {
        cout << "Enter your two numbers\n";
        cin >> begin >> end;
    } while (begin > end);

    if (begin < 2)
        exit(1);

    for (int i = begin; i <= end; i++)
    {
        flag = 1;
        for (int j = 2; j < (i / 2); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << i << " is prime number\n";
    }
}