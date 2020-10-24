#include "student.hpp"
#include <iostream>
using namespace std;

int main()
{
    string sname = "John";
    int idnum = 10000001;
    DOB date(12, 24);
    Student s(sname, idnum, date);

    cout << "Student Name: " << s.getSname() << endl;
    cout << "Student ID: " << s.getID() << endl;
    date = s.getDOB();
    date.printDate();

    date.setDOB(1, 1);
    s.setDOB(date);
    date = s.getDOB();
    date.printDate();
}