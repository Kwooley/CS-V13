#include <iostream>
using namespace std;

int main()
{
    const int N = 5;
    int rdnum;
    int prec;

    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        rdnum = rand() % 100;
        cout << "Random number: " << rdnum << endl;
        if (i == 0)
        {
            prec = rdnum;
            continue;
        }
        if (prec < rdnum)
        {
            cout << "This number " << rdnum << " is greater than peceding " << prec << endl;
        }
        prec = rdnum;
    }
}