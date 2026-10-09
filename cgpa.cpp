#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    double grade, credit;
    double totalCredits = 0;
    double totalGradePoints = 0;

    cout << "===== CGPA CALCULATOR =====" << endl;

    cout << "Enter number of courses: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of courses." << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "\nCourse " << i << endl;

        cout << "Enter grade: ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> credit;

        if (grade < 0 || grade > 10 || credit <= 0)
        {
            cout << "Invalid input." << endl;
            return 0;
        }

        double gradePoints = grade * credit;

        totalCredits += credit;
        totalGradePoints += gradePoints;

        cout << "Grade = " << grade << endl;
        cout << "Credit Hours = " << credit << endl;
        cout << "Grade Points = " << gradePoints << endl;
    }

    double GPA = totalGradePoints / totalCredits;
    double CGPA = GPA;

    cout << fixed << setprecision(2);

    cout << "\n========== RESULT ==========" << endl;
    cout << "Total Credits = " << totalCredits << endl;
    cout << "Total Grade Points = " << totalGradePoints << endl;
    cout << "Semester GPA = " << GPA << endl;
    cout << "Final CGPA = " << CGPA << endl;
    cout << "============================" << endl;

    return 0;
}
