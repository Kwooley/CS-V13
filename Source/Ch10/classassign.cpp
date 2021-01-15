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
    Myclass &operator=(Myclass &rhs);
    void printMyclass() const;
};
Myclass &Myclass::operator=(Myclass &rhs)
{
    id = rhs.id;
    name = rhs.name;
    return *this;
}

int main()
{
    Myclass c1(10, "John");
    c1.printMyclass();
    Myclass c2;
    c2 = c1;
    cout << "The class c2: \n";
    c2.printMyclass();
}

void Myclass::printMyclass() const
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
}