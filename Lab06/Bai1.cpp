#include <iostream>
#include<cstdlib>
using namespace std;
#define MAXROW 100
#define MAXCOL 100
void NhapM2C(int a[][MAXCOL], int& n)
{
	cout << "Nhap vao gia tri pha tu\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}
void NhapM2CRan(int a[][MAXCOL], int& n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = rand() % 100;
		}
	}
}
void XuatM2C(int a[][MAXCOL], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
void TimX(int a[][MAXCOL], int n, int x)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == x) {
				cout << "a[" << i << "][" << j << "]" << endl;
			}
		}
	}
}
void TimMaxK(int a[][MAXCOL], int n, int k)
{
	int max = a[k][0];
	for (int i = k; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (max < a[k][j]) {
				max = a[k][j];
			}
		}
	}
	cout << "Dong " << k << " Max la: " << max << endl;
}
void DemDuong(int a[][MAXCOL], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] > 0) {
				s++;
			}
		}
	}
	cout << s << endl;
}
void DemX(int a[][MAXCOL], int n, int x)
{
	int s = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == x) {
				s++;
			}
		}
	}
	cout << s << endl;
}
bool KTSC(int a[][MAXCOL], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] % 2 != 0) {
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int a[MAXROW][MAXCOL];
	int choice;
	int n;
	cout << "Nhap vao cap cua ma tran ";
	cin >> n;
	do {
		cout << "\n--MENU--\n";
		cout << "1. Nhap vao ngau nhien gia tri\n";
		cout << "2. Xuat ma tran ra man hinh\n";
		cout << "3. Tim X trong ma tran\n";
		cout << "4. Tim Max cua dong K\n";
		cout << "5. Dem so duong trong ma tran\n";
		cout << "6. Dem so lan X xuat hien\n";
		cout << "7. Kiem tra ma tran toan so chan\n";
		cout << "0. De thoat chuong trinh\n";
		cout << "Nhap vao lua chon cua ban\n";
		cin >> choice;
		switch (choice)
		{
		case 0:
			cout << "Da thoat chuong trinh\n";
			break;
		default:
			cout << "Vui long nhap lai\n";
			break;
		case 1:
			NhapM2CRan(a, n);
			break;
		case 2:
			XuatM2C(a, n);
			break;
		case 3:
			int x;
			cout << "Nhap vao X ";
			cin >> x;
			TimX(a, n, x);
			break;
		case 4:
			int k;
			cout << "Nhap vao so dong can xet ";
			cin >> k;
			TimMaxK(a, n, k);
			break;
		case 5:
			DemDuong(a, n);
			break;
		case 6:
			NhapM2C(a, n);
			int X;
			cout << "Nhap vao gia tri X\n";
			cin >> X;
			DemX(a, n, X);
			break;
		case 7:
			if (KTSC(a, n)) {
				cout << "Ma tran toan so chan" << endl;
			}
			else {
				cout << "Co so le trong ma tran" << endl;
			}
			break;
		}
	} while (choice != 0);
}