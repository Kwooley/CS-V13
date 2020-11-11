#include <iostream>
using namespace std;
int main()
{
    struct S
    {
        int id;
        string name;
    };

    S s1, s2;
    s1.id = 10;
    s1.name = "struct name";

    s2 = s1; // c++11 supports the struct assignment

    cout << s2.id << endl;
    cout << s2.name << endl;
}