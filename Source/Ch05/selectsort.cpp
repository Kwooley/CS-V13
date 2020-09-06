#include    <iostream>
using namespace std;

int selectmin(int a[], int, int);
void swap(int a[], int, int);
int main()
{
    const int N = 5;
    int a[N] = {5, 10, 3, 1, 9};
    int min_idx, i;

    for(i=0;i<N;i++){
        min_idx = selectmin(a,i,N);
        swap(a, i, min_idx);
    }
    for(int v : a)
        cout << v << "\t";
    cout << endl;
}
int selectmin(int a[], int start, int N)
{
    int i, min, idx;
    for(i=start; i<N; i++){
        if (i == start){
            idx = i;
            min = a[i];
        }
        else
            if ( min > a[i]){
                idx = i;
                min = a[i];
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