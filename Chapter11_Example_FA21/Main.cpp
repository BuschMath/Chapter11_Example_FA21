#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

void displayArray(double grades[], int arraySize);		// Display array
void passArray(double grades[], int arraySize);			// Change to passing grades and display array

int main()
{
	srand(unsigned int(time(NULL)));
	double shortArray[3] = { 0, 1, 2 };
	double studentGrades[10] = { 0.987, 0.789, rand() / double(RAND_MAX), rand() / double(RAND_MAX), rand() / double(RAND_MAX),
		rand() / double(RAND_MAX), rand() / double(RAND_MAX), rand() / double(RAND_MAX),  rand() / double(RAND_MAX),
		rand() / double(RAND_MAX) };

	displayArray(studentGrades, 10);
	passArray(studentGrades, 10);

	double* ptr_shortArray = shortArray;
	ptr_shortArray = &shortArray[0];

	displayArray(ptr_shortArray, 3);

	cout << endl;

	return 0;
}

void displayArray(double grades[], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << fixed << setprecision(1) << "Student " << i + 1 << ": " << grades[i] * 100 << "%\n";
	}
	cout << endl;
}

void passArray(double grades[], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (grades[i] < 0.7)
			grades[i] = 0.7;
	}

	displayArray(grades, arraySize);
}