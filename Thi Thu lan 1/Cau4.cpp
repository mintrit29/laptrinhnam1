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
void XuatM2C(int a[][MAXCOL], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] % 2 != 0) {
				s++;
			}
		}
	}
	cout << s << endl;
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