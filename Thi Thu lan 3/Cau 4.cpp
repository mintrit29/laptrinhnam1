#include <iostream>
using namespace std;
#define MAXCOL 100
#define MAXROW 100
void NhapM2C(int a[][MAXCOL], int& n)
{
	cout << "Gia tri phan tu cua ma tran\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}
bool SL(int n)
{
	if (n % 2 == 0) {
		return false;
	}
	return true;
}
void XuatM2C(int a[][MAXCOL], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (SL(a[i][j])) {
				s++;
			}
		}
	}
	cout << s << endl;
}
int main()
{
	int a[MAXROW][MAXCOL];
	int n;
	cout << "Nhap vao cap cua ma tran ";
	cin >> n;
	NhapM2C(a, n);
	XuatM2C(a, n);
	return 0;
}