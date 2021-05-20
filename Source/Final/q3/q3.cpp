#include <iostream>
#include "student.hpp"
using namespace std;

int main()
{
    Student s1("John", 3);
    cout << "********** Constructor with name and number of classes\n";
    cout << "Class s1 \n";
    s1.printAll();

    cout << "********** Member function InputClass Test\n";
    s1.inputClass("James", 2);
    cout << "Class s1 \n";
    s1.printAll();

    cout << "********** Copy Contructor Test\n";
    Student s2(s1);
    cout << "Class s2 \n";
    s2.printAll();

    Student s3;
    s3 = s1;
    cout << "********** Assignment Operator Test\n";
    cout << "Class s3 \n";
    s3.printAll();
}