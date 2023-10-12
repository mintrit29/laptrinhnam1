#include <iostream>
#include <cstdlib>
using namespace std;
#define MAXROW 100
#define MAXCOL 100
void NhapM2C(int a[][MAXCOL], int& n)
{
	cout << "Nhap gia tri phan tu\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}
void NhapM2CRand(int a[][MAXCOL], int& n)
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
void DCC(int a[][MAXCOL], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++) {
			s = s + a[i][i];
		}
	cout << s << endl;
}
bool KTSCP(int n)
{
		for (int x = 1; x <= sqrt(n); x++) {
			if (x * x == n) {
				return true;
			}
		}
		return false;
}
int DCP(int a[][MAXCOL], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++) {
			if (KTSCP(a[i][n - i - 1])) {
				dem++;
			}
	}
	return dem;
}
bool MTD(int a[][MAXCOL], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] < 0) {
				return false;
			}
		}
	}
	return true;
}
bool DCC1(int a[][MAXCOL], int n)
{
	for (int i = 0; i < n; i++) {
		if (a[i][i] != 1) {
			return false;
		}
	}
	return true;
}
int main()
{
	int a[MAXROW][MAXCOL];
	int n;
	int choice;
	do {
		cout << "1. Nhap ma tran (Nguoi dung)\n";
		cout << "2. Nhap ma tran (Random)\n";
		cout << "3. Xuat ma tran\n";
		cout << "4. Tong duong cheo chinh\n";
		cout << "5. Dem so chinh phuong duong cheo phu\n";
		cout << "6. Kiem tra ma tran duong\n";
		cout << "7. Kiem tra duong cheo chinh toan so 1\n";
		cout << "0. De thoat chuong trinh\n";
		cout << "Nhap vao lua chon cua ban\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Nhap vao cap ma tran ";
			cin >> n;
			NhapM2C(a, n);
			break;
		case 2:
			NhapM2CRand(a, n);
			break;
		case 3:
			XuatM2C(a, n);
			break;
		case 4:
			DCC(a, n);
			break;
		case 5:
			cout << DCP(a, n) << endl;
			break;
		case 6:
			if (MTD(a, n)) {
				cout << "Ma tran duong" << endl;
			}
			else {
				cout << "Ma tran ton tai so am" << endl;
			}
			break;
		case 7:
			if (DCC1(a, n)) {
				cout << "Duong cheo chinh toan so 1" << endl;
			}
			else {
				cout << "Co so khac 1" << endl;
			}
			break;
		}
	} while (choice != 0);
}