#include <iostream>
using namespace std;

double totalInches(int feet, int inches);
int main()
{
    double result;
    result = totalInches(1,2);
    cout << "Result : " << result << endl;
}
double totalInches(int feet, int inches)
{
    inches = 12 * feet + inches;
    return inches;
}