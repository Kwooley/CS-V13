#include    <iostream>
#include    <cstdlib>
#include    <ctime>
using namespace std;

int main()
{
    const int N = 10;
    int number[N], sum;
    float   avg;
    
    srand(time(0));
    for(int i=0;i<N;i++){
        number[i] = rand() % 100;    
        sum += number[i];
    }
    avg = static_cast<float>(sum) / N;

    cout << "The array contents : ";
    for(int i : number)
        cout << i << "\t";
    cout << endl;

    cout << "Sum: " << sum << endl;
    cout << "Avg: " << avg << endl;
}