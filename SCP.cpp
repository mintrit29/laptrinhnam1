#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
bool SCP(int n)
{
	for (int x = 1; x <= sqrt(n); x++) {
		if (x * x == n) {
			return true;
		}
	}
	return false;
}
int main()
{
	int n;
	cout << "Nhap vao so nguyen n ";
	cin >> n;
	if (SCP(n)) {
		cout << n << " la SCP" << endl;
	}
	else {
		cout << n << " k phai SCP" << endl;
	}
}