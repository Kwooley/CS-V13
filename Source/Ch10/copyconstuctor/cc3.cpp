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
    // Here is the Copy Constructor Implementation
    // Myclass(Myclass &ref)
    // {
    //     size = ref.size;
    //     a = new int[size];
    //     for (int i = 0; i < size; i++)
    //         a[i] = ref.a[i];
    // }
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
// Whenever the arguement of class type is call-by-value, copy constructor is called automatically.
// If you do not define a copy constructor for a class,
// C++ will automatically generate a copy constructor for you.
// If there is not your own copy constructor, the default copy constructor is called, and it support the only "shallow copy".
{
    cout << "Size : " << mc.getSize() << endl;
    for (int i = 0; i < mc.getSize(); i++)
        cout << mc[i] << "\t";
    cout << endl;
} // At the end of function, the parameter is destroyed, and destructor is called.
// Thus, the dynamic memory space pointed by a will be released.

int main()
{
    Myclass c1(10);
    cout << "class c1" << endl;
    c1.printMyclass();

    printMC(c1); // The default copy constructor is called automatically,
    // and then at the end of function, the parameter mc will be destoryed.
    // Sicne the default copy constructor performs shallow-copy,
    // When the mc is destroyed, it is the same as deleting c1.a

    cout << "class c1" << endl;
    c1.printMyclass();
}