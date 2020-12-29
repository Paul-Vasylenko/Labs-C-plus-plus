#include <iostream>
#include <ctime>
using namespace std;
double* input_a(int);
void output_a(double*, int);
int findMin(double*, int, double*);
int findMax(double*, int, double*);
double checker(double*, int, int);
double summa(double*, int, int);
double* increase(double*, double, int);


int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    double min = 11, max = -11;

    cout << "К-во элементов: ";
    cin >> n;
    double* arr, * new_arr;

    arr = input_a(n);
    output_a(arr, n);
    cout << endl;
    int indexMin = findMin(arr, n, &min);
    cout << "min= " << min << endl;
    int indexMax = findMax(arr, n, &max);
    cout << "max= " << max << endl;
    double res = checker(arr, indexMin, indexMax);
    cout << "sum= " << res << endl << endl;
    new_arr = increase(arr, res, n);
    cout << "Новый вид массива: " << endl;
    output_a(new_arr, n);

    delete[]arr;
}
//создание массива
double* input_a(int n) {

    double* arr = new double[n];
    srand(time(NULL));
    cout << "Изначальный вид массива: " << endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] = float(rand() % 2001 - 1000) / 100;

    }
    return arr;
    //detele []?
}
//вівод массива
void output_a(double* p, int n) {
    for (int i = 0; i < n; i++) {
        cout << p[i] << "\t";
    }
}
//найти наименьшее в масиве
int findMin(double* p, int n, double* pmin) {
    int indexMin;
    for (int i = 0; i < n; i++) {
        if (p[i] < *pmin) {
            *pmin = p[i];
            indexMin = i;
        }
    }
    return indexMin;
}
//найти наибольшее в массиве
int findMax(double* p, int n, double* pmax) {
    int indexMax;
    for (int i = 0; i < n; i++) {
        if (p[i] > * pmax) {
            *pmax = p[i];
            indexMax = i;
        }
    }
    return indexMax;
}
//найти левое ии правое
double checker(double* p, int indexMin, int indexMax) {
    if (indexMin < indexMax) {  // ... indexMin....indexMax....
        double res = summa(p, indexMin, indexMax);
        return res;
    }
    else {                      // ... indexMax....indexMin....
        double res = summa(p, indexMax, indexMin);
        return res;
    }

}
//вычислить сумму
double summa(double* p, int left, int right) {
    double res = 0;
    for (int i = 0; i <= (right - left); i++) {
        res = res + p[left + i];
    }
    return res;
}
//вторая часть задания
double* increase(double* p, double res, int n) {
    for (int i = 0; i < n; i++) {
        if (p[i] < 0) {

            p[i] = p[i] + res;

        }
    }
    return p;
}