#include <iostream>

using namespace std;

const int numRows = 3;
const int numCols = 4;

typedef double Array2D[numRows][numCols];
void RowSum(Array2D r_array, double* arrayRowSum);
void ColSum(Array2D c_array, double* arrayColSum);


int main()
{
	double i_array[numRows][numCols];

	for (int i = 0; i < numRows; i++)
	{
		for (int j = 0; j < numCols; j++)
		{
			i_array[i][j] = i + j;
		}
	}

	double arrayRowSum[numRows];

	RowSum(i_array, arrayRowSum);

	cout << "Returned Row Sum:\n";
	for (int i = 0; i < numRows; i++)
	{
		cout << arrayRowSum[i] << endl;
	}
	cout << endl;

	Array2D d_array;

	for (int i = 0; i < numRows; i++)
	{
		for (int j = 0; j < numCols; j++)
		{
			d_array[i][j] = 1;
		}
	}

	double arrayColSum[numCols];
	ColSum(d_array, arrayColSum);

	return 0;
}

void RowSum(Array2D i_array, double* sum)
{
	cout << "Row Sum:\n";

	for (int i = 0; i < numRows; i++)
	{
		sum[i] = 0;
		for (int j = 0; j < numCols; j++)
		{
			sum[i] += i_array[i][j];
		}
		cout << sum[i] << endl;
	}
	cout << endl;
}

void ColSum(Array2D d_array, double* sum)
{
	cout << "Column Sum:\n";

	for (int i = 0; i < numCols; i++)
	{
		sum[i] = 0;
		for (int j = 0; j < numRows; j++)
		{
			sum[i] += d_array[j][i];

		}
		cout << sum[i] << " ";
	}
	cout << endl << endl;
}