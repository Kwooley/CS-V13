#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void fillupArray(int[]);
void printArray(int[]);
void sort(int[]);
void printOccurrences(int[]);
void swap(int[], int, int);
const int MAX = 10;
int main()
{
    int arr[MAX];
    srand(time(0));
    fillupArray(arr);
    sort(arr);
    printArray(arr);
    printOccurrences(arr);
}
void printOccurrences(int a[])
{
    int cnt = 1;
    for (int i = MAX - 2; i >= 0; i--)
    {
        if (a[i] == a[i + 1])
            cnt += 1;
        else
        {
            cout << a[i + 1] << "\t" << cnt << endl;
            cnt = 1;
        }
        if (i == 0)
        {
            cout << a[i] << "\t" << cnt << endl;
        }
    }
}
void fillupArray(int a[])
{
    int minus = false;
    int limit = 10;
    for (int i = 0; i < MAX; i++)
    {
        if (rand() % 2 == 0)
            a[i] = (rand() % limit + 1) * -1;
        else
            a[i] = rand() % limit + 1;
    }
}
void sort(int a[])
{
    for (int i = 0; i < MAX - 1; i++)
    {
        for (int j = 0; j < MAX - i - 1; j++)
        {
            if (a[j] > a[j + 1])
                swap(a, j, j + 1);
        }
    }
}
void printArray(int a[])
{
    for (int i = 0; i < MAX; i++)
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