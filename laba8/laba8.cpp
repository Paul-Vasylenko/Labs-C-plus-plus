#include <iostream>
#include "generation.h"//Matrix generation
#include "maxabs.h"//Search of max abs in matrix
#include "delete.h"
using namespace std;

extern int rowMax;//row of max el.
extern int colMax;//col of max el.

int main()
{
	int sizeArr;
	cout << "Size of array: "; cin >> sizeArr;
	cout << endl;
	cout << "Randomly generated matrix: "<<endl;
	float** matrix = generateMatrix(sizeArr);//create matrix
	show_matrix(matrix, sizeArr);//display it
	cout << "=========" << endl;
	float max = findMaxAbs(matrix, sizeArr);//max is the biggest in abs number in matrix
	cout << "The biggest abs: "<< max<<endl;
	deleteRow(matrix, sizeArr, rowMax);//delete the row with the max num
	deleteCol(matrix, sizeArr, colMax);//delete the col with the max num
	sizeArr--;
	show_matrix(matrix, sizeArr);//show new matrix
	delete[]matrix;
}
