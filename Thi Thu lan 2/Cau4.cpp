#include <iostream>
using namespace std;
#define MAXROW 100
#define MAXCOL 100
void NhapM2C(int a[][MAXCOL], int& m, int& n)
{
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "]" << endl;
			cin >> a[i][j];
		}
	}
}

bool SNT(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

void XuatM2C(int a[][MAXCOL], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (SNT(a[i][j])) {
				cout << a[i][j] << " ";
			}
		}
	}
}

int main()
{
	int a[MAXROW][MAXCOL];
	int m, n;
	cout << "Nhap vao so dong va so cot\n";
	cin >> m >> n;
	NhapM2C(a, m, n);
	XuatM2C(a, m, n);
	return 0;
}