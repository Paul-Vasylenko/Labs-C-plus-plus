#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

float** deleteRow(float** matrix, int sizeArr,int row) {
	for (int i = row; i < sizeArr-1; i++) {
		for (int j = 0; j < sizeArr; j++) {
			matrix[i][j] = matrix[i + 1][j];
		}
	}
	
	return matrix;
}

float** deleteCol(float** matrix, int sizeArr, int col) {
	for (int i = 0; i < sizeArr; i++) {
		for (int j = col; j < sizeArr-1; j++) {
			matrix[i][j] = matrix[i][j+1];
		}
	}
	
	return matrix;
}