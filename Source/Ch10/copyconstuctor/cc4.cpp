#include <iostream>
using namespace std;

class Myclass
{
private:
    int size;
    int *a;

public:
    Myclass() : size(10)
    {
        a = new int[size];
        for (int i = 0; i < size; i++)
            *(a + i) = i;
    };
    Myclass(int i) : size(i)
    {
        a = new int[size];
        for (int i = 0; i < size; i++)
            *(a + i) = i;
    };
    Myclass(Myclass &ref) // Your own Copy constructor. In this construcotr, the deep-copy is implemented
    {
        size = ref.size;
        a = new int[size];
        for (int i = 0; i < size; i++)
            a[i] = ref.a[i];
    }
    int &operator[](int i)
    {
        if (i >= size)
        {
            cout << "Illegal Index\n";
            exit(0);
        }
        return a[i];
    }
    ~Myclass()
    {
        delete[] a;
    };
    int getSize() const { return size; };
    void printMyclass() const
    {
        cout << "Size : " << size << endl;
        for (int i = 0; i < size; i++)
            cout << *(a + i) << "\t";
        cout << endl;
    }
};

void printMC(Myclass mc)
{
    cout << "Size : " << mc.getSize() << endl;
    for (int i = 0; i < mc.getSize(); i++)
        cout << mc[i] << "\t";
    cout << endl;
}

int main()
{
    Myclass c1(10);
    cout << "class c1" << endl;
    c1.printMyclass();

    Myclass c2(c1); // Copy constructor is called explicitly
    cout << "class c2" << endl;
    c2.printMyclass();

    printMC(c1); // Copy constructor is called automatically
    cout << "class c1" << endl;
    c1.printMyclass();
}