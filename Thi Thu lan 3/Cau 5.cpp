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
bool NamNhuan(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
		return true;
	}
	return false;
}
void NhapMang(int a[], int& n)
{
	cout << "Gia tri cac phan tu trong mang\n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void TimX(int a[], int n, int x)
{
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			s++;
		}
	}
	cout << s << endl;
}
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
	int choice;
	do {
		cout << "---MENU---\n";
		cout << "1. Gioi Thieu Thong Tin\n";
		cout << "2. Kiem tra nam nhuan\n";
		cout << "3. Tim xem co bao nhieu X trong mang\n";
		cout << "4. Dem so le trong mang\n";
		cout << "Nhap vao lua chon cua ban\n";
		cin >> choice;
		switch (choice) {
		case 0:
			cout << "Da thoat chuong trinh\n";
			break;
		default:
			cout << "Vui long nhap lai\n";
			break;
		case 1:
			GT();
			break;
		case 2:
			int n;
			cout << "So nguyen duong\n";
			cin >> n;
			if (NamNhuan(n)) {
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
			break;
		case 3:
			int a[100], N;
			cout << "So luong phan tu mang ";
			cin >> N;
			NhapMang(a, N);
			int x;
			cout << "Gia tri x ";
			cin >> x;
			TimX(a, N, x);
			break;
		case 4:
			int A[MAXROW][MAXCOL];
			int X;
			cout << "Nhap vao cap cua ma tran ";
			cin >> X;
			NhapM2C(A, X);
			XuatM2C(A, X);
			break;
		}
	} while (choice != 0);
}