#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int findMin(int);
int main()
{
    int N;
    int min;

    srand(time(0));
    do
    {
        cout << "Enter the number of input ( N )\n";
        cin >> N;
        if (N != -1)
        {
            min = findMin(N);
            cout << "The minimum is " << min << endl;
        }
    } while (N != -1);
}
int findMin(int N)
{
    int i, num, min;
    cout << "Generated number: ";
    for(i=0;i<N;i++){
        num = rand() % 100;
        cout << num << "\t" ;
        if ( min > num || i == 0)
            min = num;
    }
    cout << endl;
    return min;
}