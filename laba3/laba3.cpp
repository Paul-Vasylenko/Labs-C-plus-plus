
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, sum, a;
	sum = 0;
	int n=1;
	cout << "Enter x: "; cin >> x;
	if (x <= -1 || x >= 1) {
		cout << "Error";
	}
	else {
		while (n <= 10) {
			a = (pow(x, 2*n) * sin(pow(x, n))) / pow(n, 2);
			sum = sum + a;
			cout << "Iteration number: " << n << endl;
			cout << "recent a: " << a << endl;
			cout << "recent sum: " << sum << endl;
			n = n + 1;
		}
		while (n >= 11 && abs(a) > 0.0001) {
				a = (pow(x, 2*n) * sin(pow(x, n))) / pow(n, 2);
				sum = sum + a;
				

			n = n + 1;
		}
		a = (pow(x,2 * n) * sin(pow(x, n))) / pow(n, 2);
		sum = sum + a;
		cout << "Iteration number: " << n << endl;
		cout << "result a: " << a << endl;
		cout << "Result sum: " << sum << endl;
	}
	return 0;
}


