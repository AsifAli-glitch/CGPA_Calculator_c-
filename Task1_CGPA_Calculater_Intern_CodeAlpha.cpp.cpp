#include <iostream>
using namespace std;

int main()
{
    int courses;
    float credit, totalCredits = 0;
    float totalGradePoints = 0;
    char grade;

    cout << "Enter number of courses: ";
    cin >> courses;

    for (int i = 1; i <= courses; i++)
    {
        cout << "\nCourse " << i << endl;

        cout << "Enter grade (A/B/C/D/F): ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> credit;

        float gradePoint = 0;

        // Grade to point conversion
        if (grade == 'A' || grade == 'a')
            gradePoint = 4;
        else if (grade == 'B' || grade == 'b')
            gradePoint = 3;
        else if (grade == 'C' || grade == 'c')
            gradePoint = 2;
        else if (grade == 'D' || grade == 'd')
            gradePoint = 1;
        else
            gradePoint = 0;

        totalCredits = totalCredits + credit;
        totalGradePoints = totalGradePoints + (gradePoint * credit);
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\n============================" << endl;
    cout << "Total Credits      = " << totalCredits << endl;
    cout << "Total Grade Points = " << totalGradePoints << endl;
    cout << "Final CGPA         = " << cgpa << endl;
    cout << "============================" << endl;

    return 0;
}
