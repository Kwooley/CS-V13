#include <iostream>
using namespace std;

int selectIndex(int[], int, int);
void swap(int[], int, int);
int main()
{
    const int N = 10;
    int numbers[N] = {20, 15, 7, 8, 11, 5, 10, 3, 1, 9};
    int max_idx, i;

    for (i = 0; i < N; i++)
    {
        max_idx = selectIndex(numbers, i, N);
        swap(numbers, i, max_idx);
    }
    for (int v : numbers)
        cout << v << "\t";
    cout << endl;
}
int selectIndex(int a[], int start, int N)
{
    int i, max, idx;
    for (i = start; i < N; i++)
    {
        if (i == start)
        {
            idx = i;
            max = a[i];
        }
        else if (max < a[i])
        {
            idx = i;
            max = a[i];
        }
    }
    return idx;
}
void swap(int a[], int i, int j)
{
    int tmp;
    tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}