#include    <iostream>
using namespace std;

int selectmax(int [], int, int); //* array, last index
void printarray(int [], int);
void swap(int [], int, int);
int main()
{
    const int N = 5;
    int a[N] = {5, 10, 3, 1, 9};
    int idx, i;

    cout << "Before sorting : " ;
    printarray(a, N);
    for(i=0; i<N-1;i++){
        idx = selectmax(a, i, N);
        swap(a, i, idx);
    printarray(a, N);
    }
    cout << "After sorting : " ;
    printarray(a, N);
}
int selectmax(int a[], int start, int N)
{
    int i, max, maxidx=0;
    for(i=start;i<N;i++) {
        if (i == start)
            max = a[i];
        else if ( max < a[i]){
            maxidx = i;
            max = a[i];
        }
    }
    return maxidx;
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
    for (int i=0; i<N; i++)
        cout << a[i] << "\t";
    cout << endl;
}
