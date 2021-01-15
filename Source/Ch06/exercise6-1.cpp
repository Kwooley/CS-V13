#include <iostream>
#include <fstream>
using namespace std;

const int N = 2;
struct Student
{
    string name;
    int score[N];
};

void readFile();
void writeFile();

int main()
{
    readFile();
    writeFile();
}

void readFile()
{
    ifstream ifs;
    Student s;
    double sum, avg;
    ifs.open("students.txt");
    if (!ifs)
    {
        cerr << "File Open error";
        exit(0);
    }

    while (ifs >> s.name)
    {
        sum = 0.0;
        cout << "Name: " << s.name << "\t";
        for (int i = 0; i < N; i++)
        {
            ifs >> s.score[i];
            sum += s.score[i];
            cout << "Score " << i + 1 << ": " << s.score[i] << "\t";
        }
        avg = sum / N;
        cout << "Sum: " << sum << "\tAvg: " << avg << endl;
    }
    ifs.close();
}

void writeFile()
{
    fstream ofs;
    Student s;
    ofs.open("students.txt", ofstream::app);
    if (!ofs)
    {
        cerr << "File Open error";
        exit(0);
    }
    cout << "Enter the new student's name: ";
    cin >> s.name;
    for (int i = 0; i < N; i++)
    {
        cout << "Enter the score: ";
        cin >> s.score[i];
    }
    ofs << s.name << "\t";
    for (int i = 0; i < N; i++)
        ofs << s.score[i] << "\t";
    ofs << "\n";
    if (ofs)
        cout << "The new students information is written successfully";
    ofs.close();
}