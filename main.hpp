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
    ifstream ifs;
    ifs.open("employee.txt");
    if (!ifs)
    {
        cout << "Error";
        exit(0);
    }

    int N;
    ifs >> N;

    cout << "ID\tName\tDepartment\tSalary" << endl;

    double totalSalary = 0;

    for (int i = 0; i < N; i++)
    {
        int id, salary;
        string name, department;
        ifs >> id >> name >> department >> salary;

        cout << id << "\t" << name << "\t" << department << "\t" << salary << endl;
        totalSalary += salary;
    }
    double averageSalary = totalSalary / N;

    cout << "Total: " << totalSalary << " Average: " << averageSalary << endl;
    ifs.close();
    return N;
}