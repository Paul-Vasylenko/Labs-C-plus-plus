#include <iostream>
using namespace std;

float evalue(int, float);//обчислення е
float firstVar(int, float);//функція на проміжку від 0 до 2
float secondVar(int, float);//більше двох
unsigned __int64 fact(int);
void print(int, float);

int main()

{
    int x;
    float eps;
    cout << "Enter int x: "; cin >> x;
    cout << endl << "Enter eps: "; cin >> eps;
    print(x,eps);
    
}

unsigned __int64 fact(int x) {//факторіал
    unsigned __int64 res;
    if (x == 0) {
        res= 1;
    }
    else {
        res= x * fact(x - 1);
    }
    return res;
}

void print(int x, float eps){//виведення результату
    float res;
    if (x < 0) {
        cout << "Error";
    }
    else if (x <= 2) {
        res = firstVar(x,eps);
        printf("\nResult = %.10lf",res);
    }
    else {
        res = secondVar(x, eps);
        printf("\nResult = %.10lf", res);
    }
}

float firstVar(int x, float eps) {//обчислення для першої функції
    double e1 = evalue(x,eps);
    double e2 = evalue(2 * x,eps);
    return e1 + e2;
}

float secondVar(int x, float eps) {//обчислення другої функції
    double e1 = evalue(x+5, eps);
    double e2 = evalue(x + 2,eps);
    return (1/e1) - e2;
}
float evalue(int x,float eps) {//очислення значення числа е для заданого х
    double n1 = 0, n2 = 0;
        int i = 1;
        long double res=1;
    do
    {
        n2 = n1;
        if (i % 2 != 0) {
            n1 = -(pow(x, i) / fact(i));
       }
        else {
            n1 = (pow(x, i) / fact(i));
        }
        res = res + n1;
        i++;
    } while (abs(n1 + n2) > eps);
    return res;
}