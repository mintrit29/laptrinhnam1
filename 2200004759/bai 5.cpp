#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
#define MAXROW 100
#define MAXCOL 100
void GioiThieu()
{
	cout << "MSSV: 2200004759\n";
	cout << "Ho ten: Tong Minh Triet\n";
	cout << "Lop: 22BITV01\n";
}
void KTSoCP(int n)
{
	int x = 0;
	bool found = false;
	for (x = 1; x <= sqrt(n); x++) {
		if (x * x == n) {
			found = true;
			break;
		}
	}
	if (found) {
		cout << "1\n";
	}
	else {
		cout << "0\n";
	}
}
void NhapMang(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang\n";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]";
		cin >> a[i];
	}
}
void SoNN(int a[], int n)
{
	int min = a[0];
	for (int i = 0; i < n; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	cout << min << endl;
}
void SoLN(int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	cout << max << endl;
}
void GiaTriTB(int a[], int n)
{
	float s = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		count++;
		s = s + a[i];
	}
	float tb = s / count;
	cout << tb << endl;
}
void NhapM2C(int a[][MAXCOL], int& n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Gia tri phan tu ma tran a[" << i << "][" << j << "]";
			cin >> a[i][j];
		}
	}
}
bool KTSNT(int n) {
	if (n <= 1) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}
void SoNT(int a[][MAXCOL], int n)
{
	bool found = false;
	int s = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
			if (KTSNT(a[i][j])) {
				found = true;
				s += a[i][j];
			}
		}
		cout << endl;
	}
	if (found) {
		cout << "Tong so nguyen to trong ma tran: " << s << endl;
	}
	if (!found) {
		cout << "Ma tran khong co so nguyen to\n";
	}
}
int main()
{
	int choice;
	do 
	{
		cout << "---MENU---\n";
		cout << "1. Bai01\n";
		cout << "2. Bai02\n";
		cout << "3. Bai03\n";
		cout << "4. Bai04\n";
		cout << "0. De ket thuc ctrinh\n";
		cout << "Nhap vao lua chon cua ban: \n";
		cin >> choice;
		switch (choice) {
		case 0:
			cout << "Da thoat chuong trinh\n";
			break;
		case 1:
			GioiThieu();
			break;
		case 2:
			int n;
			cout << "Nhap vao so nguyen n";
			cin >> n;
			KTSoCP(n);
			break;
		case 3:
			int a[100], z;
			NhapMang(a, z);
			SoNN(a, z);
			SoLN(a, z);
			GiaTriTB(a, z);
			break;
		case 4:
			int c[MAXROW][MAXCOL];
			int d;
			cout << "Nhap vao cap cua ma tran";
			cin >> d;
			NhapM2C(c, d);
			SoNT(c, d);
			break;
		default:
			cout << "Nhap sai so vui long nhap lai\n";
		}
	} while (choice != 0);
}