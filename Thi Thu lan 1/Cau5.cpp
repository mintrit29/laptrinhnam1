#include <iostream>
using namespace std;
#define MAXROW 100
#define MAXCOL 100
void GT()
{
		cout << "MSSV: 2200004759\n";
		cout << "Ho ten: Tong Minh Triet\n";
		cout << "Lop: 22BITV01\n";
}
void SL(int n)
{
	if (n % 2 != 0) {
		cout << "1\n";
	}
	else {
		cout << "0\n";
	}
}
void NhapMang(int a[], int& n, int& x)
{
	cout << "Nhap vao cac phan tu mang\n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void XuatMang(int a[], int n, int x)
{
	for (int i = 0; i < n; i++) {
		if (x == a[i]) {
			cout << i << endl;
		}
	}
}
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
	int choice;
	do {
		cout << "---Menu---\n";
		cout << "1.\n";
		cout << "2.\n";
		cout << "3.\n";
		cout << "4.\n";
		cout << "0. De Thoat\n";
		cout << "Nhap vao lua chon cua ban\n";
		cin >> choice;
		switch (choice) {
		case 1:
			GT();
			break;
		case 2:
			int n;
			cout << "Nhap vao so nguyen n\n";
			cin >> n;
			SL(n);
			break;
		case 3:
			int a[100], N, x;
			cout << "Nhap vao do dai cua mang\n";
			cin >> N;
			NhapMang(a, N, x);
			cout << "Nhap vao so can tim\n";
			cin >> x;
			XuatMang(a, N, x);
			break;
		case 4:
			int A[MAXROW][MAXCOL];
			int m, z;
			cout << "Nhap vao so dong va so cot\n";
			cin >> m >> z;
			NhapM2C(A, m, z);
			XuatM2C(A, m, z);
			break;
		}
	} while (choice != 0);
}