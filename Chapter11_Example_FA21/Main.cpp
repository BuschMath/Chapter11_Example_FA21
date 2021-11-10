#include <iostream>
#include <string>

using namespace std;

enum gradeType { A, B, C, D, F };

struct studentRecord
{
	string firstName;
	string lastName;
	string className;
	gradeType examGrades[4];
	gradeType finalGrade;
};

int main()
{
	studentRecord classRecord[20];

	classRecord[0].firstName = "John";
	classRecord[0].lastName = "Doe";
	classRecord[0].className = "Introduction to Statistics";
	classRecord[0].finalGrade = B;

	for (int i = 0; i < 4; i++)
	{
		classRecord[0].examGrades[i] = B;
	}

	cout << classRecord[0].firstName + " " + classRecord[0].lastName << endl;

	return 0;
}