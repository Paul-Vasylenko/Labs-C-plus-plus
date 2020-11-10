
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
			a = (pow(x, 2 * n) * sin(pow(x, n))) / pow(n, 2);
			sum = sum + a;
			cout << n << endl;
			cout << a << endl;
			cout << sum << endl;
			n = n + 1;
		}
		while (n >= 11) {
			a = (pow(x, 2 * n) * sin(pow(x, n))) / pow(n, 2);
			if (abs(a) < 0.0001) {
				sum = sum + a;
				cout << n << endl;
				cout << a << endl;
				cout << sum << endl;
				break;
			}
			else {
				sum = sum + a;
			}

			n = n + 1;
		}
	}
	return 0;
}


