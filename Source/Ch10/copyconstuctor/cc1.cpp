#include <iostream>
using namespace std;

class Myclass
{
private:
    int id;
    string name;

public:
    Myclass() : id(0), name(){};
    Myclass(int i, string s) : id(i), name(s){};
    Myclass(Myclass &ref) // Copy Constructor
    {
        id = ref.id;
        name = ref.name;
    }
    ~Myclass(){};
    void printMyclass() const
    {
        cout << "ID: " << id << " Name " << name << endl;
    }
};

int main()
{
    Myclass c1(10, "John");
    Myclass c2(c1); // The orginal purpose of Copy Constructor.

    c2.printMyclass();
}