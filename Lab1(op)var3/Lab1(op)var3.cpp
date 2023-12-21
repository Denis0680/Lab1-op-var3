#include <iostream>

using namespace std;

int main() {
	int a, b, c, min;
	cout << "a,b,c= ";
	cin >> a >> b >> c;

	if (a < b && a < c) {
		min = a;
	}
	else if (b < a && b < c) {
		min = b;
	}
	else if (c < b && c < a) {
		min = c;
	}

	cout << "min(a,b,c)= " << min;
}