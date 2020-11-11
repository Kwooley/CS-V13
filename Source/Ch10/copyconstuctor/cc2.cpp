#include <iostream>
using namespace std;

class Myclass
{
private:
    int id;
    string name;

public:
    Myclass() : id(0), name(){};
    Myclass(int i, string s, int size) : id(i), name(s){};
    Myclass(Myclass &ref)
    {
        id = ref.id;
        name = ref.name;
    }
    ~Myclass(){};
    int getID() const { return id; };
    string getName() const { return name; };
    void printMyclass() const
    {
        cout << "ID: " << id << " Name " << name << endl;
    }
};

void printMC(Myclass mc)
{
    cout << "ID: " << mc.getID() << " Name " << mc.getName() << endl;
}
int main()
{
    Myclass c1(10, "John", 5);
    Myclass c2(c1);

    c2.printMyclass();

    // Whenever the argument of class type is "call-by-value",
    printMC(c2); // The copy constructor is called automatically

    c1.printMyclass();
}