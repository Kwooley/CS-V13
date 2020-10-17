// Lab 5-1-1
// Print all elements in an array with orginal and reverse order.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int N = 10;
    int numbers[N] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    // Using regular for-loop
    for (int i = 0; i < N; i++)
        cout << numbers[i] << "\t";
    cout << endl;

    // Range-based for loop
    for (int v : numbers)
        cout << v << "\t";
    cout << endl;

    // Reverse order with for loop
    for (int i = N - 1; i >= 0; i--)
        cout << numbers[i] << "\t";
    cout << endl;

    //***************************************************************
    // Vector Example
    vector<int> intvec = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    vector<int>::iterator it;
    vector<int>::reverse_iterator rit;

    for (auto v : intvec)
        cout << v << "\t";
    cout << endl;

    for (it = intvec.begin(); it != intvec.end(); it++)
        cout << *it << "\t";

    for (rit = intvec.rbegin(); rit != intvec.rend(); rit++)
        cout << *rit << "\t";
    cout << endl;
}