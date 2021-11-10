#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	double studentGrades[10];
	srand(unsigned int(time(NULL)));

	studentGrades[0] = 0.987;
	studentGrades[1] = 0.789;

	for (int i = 2; i < 10; i++)
	{
		studentGrades[i] = rand() / double(RAND_MAX);
	}

	for (int i = 0; i < 10; i++)
	{
		cout << fixed << setprecision(1) << "Student " << i + 1 << ": " << studentGrades[i] * 100 << "%\n";
	}

	cout << endl;

	return 0;
}