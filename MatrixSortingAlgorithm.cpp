#include "MatrixSortingAlgorithm.h"

using namespace std;

vector<vector<int>> generate(vector<vector<int>> matrix, const size_t m, const size_t n)
{
	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			for (size_t k = 0; k < m - i - 1; k++)
			{
				if (matrix[k][j] < matrix[k + 1][j])
				{
					swap(matrix[k][j], matrix[k + 1][j]);
				}
			}
		}
	}

	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			for (size_t k = 0; k < n - j - 1; k++)
			{
				if (matrix[i][k] < matrix[i][k + 1])
				{
					swap(matrix[i][k], matrix[i][k + 1]);
				}
			}
		}
	}

	return matrix;
}

void printToConsole(const vector<vector<int>> matrix, const size_t m, const size_t n)
{
	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

vector<vector<int>> fillMatrixWithRandomValues(const size_t m, const size_t n)
{
	vector<vector<int>> matrix;
	for (size_t i = 0; i < m; i++)
	{
		matrix.emplace_back();
		for (size_t j = 0; j < n; j++)
		{
			matrix[i].push_back(rand() % 100 + 1);
		}
	}

	return matrix;
}

int main()
{
	srand(time(nullptr));

	const size_t m = 3, n = 7;
	const vector<vector<int>> vectMatrix = fillMatrixWithRandomValues(m, n);

	printToConsole(vectMatrix, m, n);
	printToConsole(generate(vectMatrix, m, n), m, n);


	return 0;
}
