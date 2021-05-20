#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int fillupArray(int[]);
void printArray(int[], int);
void swap(int a[], int, int);
void sort(int[], int);
void findGreatDN(int[], int);
const int MAX = 10;
int main()
{
    int arr[MAX];
    int N;

    srand(time(0));
    N = fillupArray(arr);
    sort(arr, N);
    printArray(arr, N);
    findGreatDN(arr, N);
}
int fillupArray(int a[])
{
    int n;
    n = rand() % MAX + 1;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 14 + 1;
    }

    return n;
}
void sort(int a[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (a[j] > a[j + 1])
                swap(a, j, j + 1);
        }
    }
}
void findGreatDN(int a[], int N)
{
    int divcnt[MAX] = {0};

    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            // if a[i] is the same as a[i+1], no need to check again. copy result of i+1 to i
            if ((a[i] == a[i + 1]) && (i != N - 1)) // duplication check
            {
                divcnt[i] = divcnt[i + 1];
                continue;
            }
            // if a[j] is the same as a[j-1], skip because it checked it already.
            if (a[j] == a[j - 1])
                continue;
            // if a[i] == a[j], skip the iteration.
            if (a[i] == a[j])
                continue;
            if (a[i] % a[j] == 0)
                divcnt[i] += 1;
        }
    }
    for (int i = 0; i < N; i++)
        cout << divcnt[i] << "\t";
    cout << endl;
}
void printArray(int a[], int N)
{
    for (int i = 0; i < N; i++)
        cout << a[i] << "\t";
    cout << endl;
}
void swap(int a[], int i, int j)
{
    int tmp;
    tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
    return;
}