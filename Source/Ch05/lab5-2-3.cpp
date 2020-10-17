#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void makearray(double [],int N);
void printarray(double [],int N);
int outOfOrder(double [], int N);
int main()
{
    const int N = 10;
    double numbers[N];
    int checkresult;
    srand(time(0));
    makearray(numbers, N);
    printarray(numbers, N);
    checkresult = outOfOrder(numbers, N);
    if ( checkresult == -1)
        cout << "The array has the sorted order \n";
    else
        cout << "The " << checkresult << "th index element is out of order\n";
    
}

void makearray(double n[], int N)
{
    int i;
    for(i=0; i<N; i++){
        n[i] = (double)rand()/RAND_MAX * 100;
    }
}
void printarray(double n[], int  N)
{
    for(int i=0;i<N;i++)
        cout << n[i] <<  "\t";
    cout << endl;
}
int     outOfOrder(double n[], int N)
{
    int i;
    for(i=0; i<N-1; i++)
    {
        if ( n[i] > n[i+1] )
            return i;
    }
   return -1;
}