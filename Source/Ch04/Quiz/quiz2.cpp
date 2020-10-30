#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void getRandnum(int &n1, int &n2, int &n3);
int findMin(int n1, int n2, int n3);
void printResult(int n1, int n2, int n3, int min);

int main()
{
    int n1, n2, n3;
    int min;

    srand(time(0));
    getRandnum(n1, n2, n3);
    min = findMin(n1, n2, n3);
    printResult(n1, n2, n3, min);
}

void getRandnum(int &n1, int &n2, int &n3)
{
    n1 = rand() % 100;
    n2 = rand() % 100;
    n3 = rand() % 100;
}
int findMin(int n1, int n2, int n3)
{
    int min = n1;
    if (min > n2)
        min = n2;
    if (min > n3)
        min = n3;
    return min;
}
void printResult(int n1, int n2, int n3, int min)
{
    cout << "The generated random numbers are: " << n1 << "\t" << n2 << "\t" << n3 << endl;
    cout << "The minimum value of three values is: " << min << endl;
}