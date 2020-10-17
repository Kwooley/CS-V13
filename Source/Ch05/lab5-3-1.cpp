#include    <iostream>
using namespace std;

int main()
{
    const int N = 10;
    string names[N] = { 
        "Isabella",
        "Charlotte",
        "Olivia",
        "Sophia",
        "Michael",
        "Mason",
        "Ryan",
        "William",
        "Jacob",
        "Noah" };
    string userkeyword;
    int     idx, i;
    short   found=0;

    cout << "Enter your input: Name : ";
    cin >> userkeyword;

    for(i=0;i<N;i++) {
        if ( names[i] == userkeyword){
            found = 1;
            idx = i;
            break;
        }
    }
    if (found)
        cout << "The name " << userkeyword << " is found at the index " << idx << endl;
    else
        cout << "The name " << userkeyword << " is not found " << endl;
}
