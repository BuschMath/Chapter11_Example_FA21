#include <iostream>

using namespace std;

void functionI(int i_array[][3]);

typedef double Array2D[2][3];			
void functionD(Array2D d_array);

int main()
{
	int i_array[2][3];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			i_array[i][j] = 0;
		}
	}

	functionI(i_array);

	Array2D d_array;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			d_array[i][j] = 1;
		}
	}

	functionD(d_array);

	return 0;
}

void functionI(int i_array[][3])
{
	cout << "functionI:\n";

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << i_array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void functionD(Array2D d_array)
{
	cout << "functionD:\n";

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << d_array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}