#include <iostream>
using namespace std;
#include <ctime>
#include <iomanip>


float** generateMatrix(int sizeArr) {
	srand(time(NULL));
	float** matrix = new float* [sizeArr];
	for (int i = 0; i < sizeArr; i++) {
		matrix[i] = new float[sizeArr];
	}

	for (int i = 0; i < sizeArr; i++) {
		for (int j = 0; j < sizeArr; j++) {
			matrix[i][j] = float(rand() % 2001 - 1000) / 100;
		}
	}
	return matrix;
}

void show_matrix(float** matrix, int sizeArr) {
	for (int i = 0; i < sizeArr; i++) {
		for (int j = 0; j < sizeArr; j++) {
			cout << setw(4) << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}