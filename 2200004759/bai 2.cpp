#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	int x = 0;
	int n;
	cout << "Nhap vao so nguyen n\n";
	cin >> n;
	bool found = false;
	for ( x = 1; x <= sqrt(n); x++) {
		if (x * x == n) {
			found = true;
			cout << "1";
		}
	}
	if (!found) {
		cout << "0";
	}
	return 0;
}