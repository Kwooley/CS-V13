#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int total_num;
    string deptname;
    string empname;
    double salary;
    int empid;
    ofstream ofs;

    ofs.open("employee.txt");
    if (ofs.fail())
    {
        cerr << "File Op[en Error\n";
        exit(0);
    }
    cout << "Enter the number of employees : ";
    cin >> total_num;
    ofs << total_num << endl;
    for (int i = 0; i < total_num; i++)
    {
        cout << "Enter the emp id : ";
        cin >> empid;
        cout << "Enter the emp name : ";
        cin >> empname;
        cout << "Enter the dept name : ";
        cin >> deptname;
        cout << "Enter the salary : ";
        cin >> salary;
        ofs << empid << " " << empname << " " << deptname << " " << salary << endl;
    }
    ofs.close();
}