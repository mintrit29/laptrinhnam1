#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
bool SNT(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cout << "Nhap vao so nguyen n ";
	cin >> n;
	if (SNT(n)) {
		cout << n << " la SNT" << endl;
	}
	else {
		cout << n << " k phai SNT" << endl;
	}
}