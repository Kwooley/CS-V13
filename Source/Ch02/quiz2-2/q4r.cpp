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
    double sum, avg;
    ifstream ifs;

    ifs.open("employee.txt");
    if (ifs.fail())
    {
        cerr << "File Open Error \n";
        exit(0);
    }
    ifs >> total_num;
    sum = 0;
    for (int i = 0; i < total_num; i++)
    {
        ifs >> empid >> empname >> deptname >> salary;
        cout << " emp id : " << empid << "\t";
        cout << " emp name : " << empname << "\t";
        cout << " dept name : " << deptname << "\t";
        cout << " salary : " << salary << "\n";
        sum += salary;
    }
    avg = sum / total_num;
    cout << " Sum : " << sum << "\t"
         << "Avg : " << avg << endl;
}
