#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void makearray(int n[], int);
void printarray(int n[], int);
void findminmax(int n[], int);
int main()
{
    const int N = 10;
    int     numbers[N];
    srand(time(0));
    makearray(numbers, N);
    printarray(numbers, N);
    findminmax(numbers, N);
}
void makearray(int n[], int N)
{
    for(int i=0;i<N;i++){
        n[i] = rand() % 100;
    }
}
void printarray(int n[], int N)
{
    for(int i=0;i<N;i++)
        cout << n[i] << "\t";
    cout << endl;
}
void findminmax(int n[], int N)
{
    int min, max;
    for(int i=0;i<N;i++){
        if (i == 0)
            min = max = n[i];
        else
        {
            if (min > n[i]) min = n[i];
            if (max < n[i]) max = n[i];
        }
    }
    cout << "Max: " << max << "\t";
    cout << "Min: " << min << endl;
}
