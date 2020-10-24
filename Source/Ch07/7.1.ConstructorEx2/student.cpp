#include "student.hpp"
#include <iostream>
#include <string>
using namespace std;

DOB::DOB() : month(1), day(1)
{
}
DOB::DOB(int m, int d) : month(m), day(d)
{
}
int DOB::getMonth() const
{
    return month;
}
int DOB::getDay() const
{
    return day;
}
void DOB::setDOB(int m, int d)
{
    month = m;
    day = d;
}
void DOB::setMonth(int m)
{
    month = m;
}
void DOB::setDay(int d)
{
    day = d;
}
void DOB::printDate() const
{
    cout << "DOB: " << month << "\t" << day << endl;
}

Student::Student() : sname("noname"), id(0), dob(1, 1)
{
}
Student::Student(string stname, int idnum, DOB date) : sname(stname), id(idnum), dob(date)
{
}
int Student::getID() const
{
    return id;
}
string Student::getSname() const
{
    return sname;
}
DOB Student::getDOB() const
{
    return dob;
}
void Student::setSname(string name)
{
    sname = name;
}
void Student::setID(int num)
{
    id = num;
}
void Student::setDOB(DOB date)
{
    dob = date;
}