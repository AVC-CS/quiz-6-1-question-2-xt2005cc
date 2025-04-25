#include <iostream>
#include <fstream>
using namespace std;

int writeFile()
{
    ofstream file("employee.txt");
    int numEmployees;
    cout << "Enter number of employees: ";
    cin >> numEmployees;

    file << numEmployees << endl;

    for (int i = 0; i < numEmployees; i++)
    {
        int id;
        string name, department;
        double salary;

        cout << "Enter ID, Name, Department, and Salary: "
        cin >> id >> name> >> department >> salary;

        file << id << " " << name << " " << department << " " << salary << endl;
    }

    file.close();
    return numEmployees;
}