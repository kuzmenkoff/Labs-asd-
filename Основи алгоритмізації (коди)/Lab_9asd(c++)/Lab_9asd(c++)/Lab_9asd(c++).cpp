#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void MatrixOutput(int** Matrix, int m, int n); // Вивід матриці
int** CreateMatrix(int m, int n); // Задає розмір матриці
int** GenerateAElements(int** Matrix, int m, int n); // Генерація матриці А випадковим чином
int** GenerateNewAElements(int** AMatrix, int m, int n); // Зміна матриці відповідно умові


int main()
{
	int m, n;
	int** AMatrix;
	cout << "m = ";
	cin >> m;
	cout << "n = ";
	cin >> n;
	int* FirstNElement = new int[n];
	AMatrix = CreateMatrix(m, n);
	AMatrix = GenerateAElements(AMatrix, m, n);
	cout << "\nFirst matrix:\n";
	MatrixOutput(AMatrix, m, n);
	cout << "First negetive elements of each column:\n";
	AMatrix = GenerateNewAElements(AMatrix, m, n);
	cout << "\nNew matrix:\n";
	MatrixOutput(AMatrix, m, n);

}

int** CreateMatrix(int m, int n)
{
	int** Matrix = new int* [m];
	for (int i = 0; i < n; i++) {
		Matrix[i] = new int[n];
	}
	return Matrix;
}

int** GenerateAElements(int** Matrix, int m, int n)
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			Matrix[i][j] = rand() % 19 - 9;

		}
	}
	return Matrix;
}

int** GenerateNewAElements(int** AMatrix, int m, int n)
{
	int* FirstNElement = new int[n];
	int tmp;
	cout << "\n";
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
			FirstNElement[j] = AMatrix[i][j];
			if (AMatrix[i][j] < 0) {
				cout << "A[" << i << "][" << j << "] = " << FirstNElement[j] << endl;
				break;
			}
		}
	}
	
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
			if (AMatrix[i][j] < 0) {
				tmp = AMatrix[i][j];
				AMatrix[i][j] = AMatrix[m - 1][j];
				AMatrix[m - 1][j] = tmp;
				break;
			}
		}
	}
	return AMatrix;
}



void MatrixOutput(int** Matrix, int m, int n)
{
	cout << "\n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (Matrix[i][j] < 0) {
				cout << Matrix[i][j] << "  ";
			}
			else {
				cout << " " << Matrix[i][j] << "  ";
			}
		}
		cout << "\n";
	}
	cout << "\n";
}

