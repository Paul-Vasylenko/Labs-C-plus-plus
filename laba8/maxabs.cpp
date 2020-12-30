#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

int rowMax, *pr=&rowMax;
int colMax, *pc=&colMax;

float findMaxAbs(float** matrix,int sizeArr) {
	float max = abs(matrix[0][0]);
	for (int i = 0; i < sizeArr; i++) {
		for (int j = 0; j < sizeArr; j++) {
			if (abs(matrix[i][j]) > max) {
				max = abs(matrix[i][j]);
				*pr = i;
				*pc = j;
			}
		}
	}
	
	return max;
}