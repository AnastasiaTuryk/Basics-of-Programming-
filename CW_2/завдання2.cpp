#include<iostream>
using namespace std;
int main()
{
	//матриц€
	int n, m;
	cout << "input size of your rows: ";
	cin >> n;
	cout << "input size of your cols: ";
	cin >> m;

	int** matrix = new int* [n];
	for (int i = 0;i < n;i++)
	{
		matrix[i] = new int[m];
		for (int j = 0;j < m;j++)
		{
			cout << "[" << i + 1 << "," << j + 1 << "]" << ":";
			cin >> matrix[i][j];
		}
	}

	cout << "your matrix:" << endl;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}



	//м≥н≥мальний елемент в кожному р€дку
	int* minelem = new int[n];
	for (int i = 0;i < n;i++)
	{
		int min = matrix[0][0];
		for (int j = 0;j < m;j++)
		{
			if (min > matrix[i][j])
			{
				min = matrix[i][j];
			}
		}
		minelem[i] = min;
	}

	for (int i = 0;i < n;i++)
	{
		cout << "min element of rows:" << minelem[i] << " ";
	}
	cout << endl;


	//максимальний елемент по стовпц€х
	int* maxelem = new int[m];
	for (int j = 0;j < m;j++)
	{
		int max = matrix[0][0];
		for (int i = 0;i < n;i++)
		{
			if (max < matrix[i][j])
			{
				max = matrix[i][j];
			}
		}
		maxelem[j] = max;
	}

	for (int j = 0;j < m;j++)
	{
		cout << "max elem of cols: " << maxelem[j] << " ";
	}
	cout << endl;

	for (int i = 1;i < n - 1;i++)
	{
		for (int j = 1;i < m - 1;j++)
		{
			if (matrix[i - 1][j] > matrix[i][j] && matrix[i + 1][j] > matrix[i][j] && matrix[i][j - 1] < matrix[i][j] && matrix[i][j + 1] < matrix[i][j])||(matrix[i - 1][j]<matrix[i][j] && matrix[i + 1][j]<matrix[i][j] && matrix[i][j - 1]>matrix[i][j] && matrix[i][j + 1]>matrix[i][j]))
			cout << " sidlovi tochki" << i << " " << j << endl;
		}
	}


	for (int i = 0;i < n;i++)
	{
		delete[] matrix[i];
	}

	delete[] matrix;



	return 0;
}

