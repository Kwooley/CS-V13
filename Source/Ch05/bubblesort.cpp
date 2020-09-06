#include    <iostream>
using namespace std;

void swap(int [], int, int);
void bubblesort(int [], int);
void printarray(int [], int);
int main()
{
    const int N = 5;
    int a[N] = {5, 10, 3, 1, 9};
    int min_idx, i;

    printarray(a, N);
    bubblesort(a,N);
    printarray(a, N);
}
void bubblesort(int a[], int N)
{
    for(int i=0;i<N-1;i++){
        for (int j=0; j<N-1; j++)
            if ( a[j] > a[j+1])
                swap(a, j, j+1);
    }
}
void swap(int a[], int i, int j)
{
    int tmp;
    tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}
void printarray(int a[], int N)
{
    for(int i=0;i<N;i++)
        cout << a[i] << "\t";
    cout << endl;
}