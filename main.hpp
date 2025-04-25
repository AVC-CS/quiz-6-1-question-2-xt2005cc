#include <iostream>
#include <fstream>
using namespace std;

int writeFile()
{
    ofstream ofs;
    ofs.open("employee.txt");
    if (!ofs)
    {
        cout << "File Open Error.";
        exit(0);
    }

    int N;
    cout << "Enter number of employees: ":
    cin >> N;
    ofs << N << endl;

    for(int i = 0; i < N; i++)
    {
        int id, salary;
        string name, department;
        cout << "Enter ID, Name, Department, and Salary: ";
        cin >> id >> name >> department >> salary;

        ofs << id << " " << name << " " << department << " " << salary << endl;
    }
    ofs.close();
    return N;
}




int readFile()
{
    ifstream file("employee.txt");
    file >> numEmployees;

    cout << "ID\tName\t"
}