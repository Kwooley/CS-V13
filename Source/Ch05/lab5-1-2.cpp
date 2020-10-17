// Lab 5-1-2
// 1) Generate 5 random numbers and store them into array
// 2) Get a summation of all elements in the array
// 3) Calculate the average of elements.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int N = 10;
    int number[N], sum;
    float avg;

    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        number[i] = rand() % 100;
        sum += number[i];
    }
    avg = static_cast<float>(sum) / N;

    cout << "The array contents : ";
    for (int i : number)
        cout << i << "\t";
    cout << endl;

    cout << "Sum: " << sum << endl;
    cout << "Avg: " << avg << endl;
}