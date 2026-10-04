#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Please Define the total number of students : ";
    int n;
    cin >> n;
    int student[1000] = {};
    int marks[1000] = {};
    string name[1000] = {};
    for (int i = 0; i < n; i++)
    {
        cout << "Please Enter the id of student : ";
        cin >> student[i];
        cout << "Please Enter the Name of Student : ";
        cin >> name[i];
        cout << "Programming Marks : ";
        cin >> marks[(i * 4) + 0];
        cout << "Maths Marks : ";
        cin >> marks[(i * 4) + 1];
        cout << "DS Marks : ";
        cin >> marks[(i * 4) + 2];
        cout << "AI Marks : ";
        cin >> marks[(i * 4) + 3];
    }

    cout << "ID\t" << "Name\t" << "Programming\t" << "Maths\t" << "DS\t" << "AI\t" << "Total\t" << "Average\t" << "Result";
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        int total = (marks[(i * 4) + 0]) + (marks[(i * 4) + 1]) + (marks[(i * 4) + 2]) + (marks[(i * 4) + 3]);

        double avg = total / 4.0;

        cout << i + 1 << "\t" << name[i] << "\t   " << marks[(i * 4) + 0] << "\t\t" << marks[(i * 4) + 1] << "\t" << marks[(i * 4) + 2] << "\t" << marks[(i * 4) + 3] << "\t" << total << "\t" << avg << "\t";
        if (avg >= 50)
        {
            cout << "PASS";
        }
        else
        {
            cout << "FAIL";
        }
        cout << endl;
    }

    return 0;
}