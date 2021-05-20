#include "student.hpp"
#include <iostream>
#include <string>
using namespace std;

Student::Student(string n, int num)
{
    name = n;
    num_classes = num;
    class_list = new string[num];
    for (int i = 0; i < num_classes; i++)
    {
        cout << "Enter the course name : ";
        cin >> class_list[i];
    }
}
Student::Student(Student &rhs)
{
    name = rhs.name;
    num_classes = rhs.num_classes;
    delete[] class_list;
    class_list = new string[num_classes];
    for (int i = 0; i < num_classes; i++)
        class_list[i] = rhs.class_list[i];
}
Student::~Student()
{
    delete[] class_list;
}
Student &Student::operator=(Student &rhs)
{
    name = rhs.name;
    num_classes = rhs.num_classes;
    delete[] class_list;
    class_list = new string[num_classes];
    rhs.printAll();
    for (int i = 0; i < num_classes; i++)
    {
        class_list[i] = rhs.class_list[i];
    }
    return *this;
}
void Student::inputClass(string n, int num)
{
    this->resetClass();
    name = n;
    num_classes = num;
    class_list = new string[num];
    for (int i = 0; i < num_classes; i++)
    {
        cout << "Enter the course name : ";
        cin >> class_list[i];
    }
}

void Student::resetClass()
{
    delete[] class_list;
    num_classes = 0;
}
void Student::printAll() const
{
    cout << "Name " << name << " Num of classes " << num_classes << endl;
    cout << "Course List : \n";
    for (int i = 0; i < num_classes; i++)
        cout << "\t" << class_list[i] << endl;
}
string Student::getName() const
{
    return name;
}
int Student::getNumclasses() const
{
    return num_classes;
}