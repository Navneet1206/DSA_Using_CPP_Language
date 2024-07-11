/*
Problem: Sorting Students by Grades
Description:
You are given a list of students along with their grades. Your task is to sort the students based on their grades in descending order. If two students have the same grade, they should be sorted alphabetically by their names in ascending order.

Input:

The first line of input contains an integer N, the number of students.
The next N lines each contain a student's name (a string of up to 100 characters) and their grade (an integer between 0 and 100).
Output:

Output the list of students sorted by their grades in descending order. If two students have the same grade, sort them alphabetically by their names in ascending order.
Example:
<=========================================>

                Input:
                5
                Alice 90
                Bob 87
                Charlie 90
                David 87
                Eve 95
<========================================>
                Output:
                Eve 95n
                Alice 90
                Charlie 90
                Bob 87
                David 87
*/

//=================================================================================//
//    This code is pasted by GPT for my learning, this is not created by me.       //
//=================================================================================//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; // Added By me For remove std:: repeatingness
struct Student
{
    string name;
    int grade;
};

// Comparison function to sort students
bool compareStudents(const Student &a, const Student &b)
{
    if (a.grade == b.grade)
    {
        return a.name < b.name;
    }
    return a.grade > b.grade;
}

int main()
{
    int n;
    cout << "Enter the number of the students : "; // Added By me For better user friendly environment
    cin >> n;
    vector<Student> students(n);
    cout << "Student name\tStudent marks (0-100) : \n"; // Added By me For better user friendly environment
    for (int i = 0; i < n; ++i)
    {
        cin >> students[i].name >> students[i].grade;
    }

    sort(students.begin(), students.end(), compareStudents);

    cout << "\n\tSorted Name : \n\nStudent name\tStudent marks (0-100) : \n"; // Added By me For better user friendly environment
    for (const auto &student : students)
    {
        cout << student.name << "                " << student.grade << endl;// spaces added By me For better user friendly environment
    }

    return 0;
}
