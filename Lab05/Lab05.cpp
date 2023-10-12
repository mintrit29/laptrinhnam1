#include <iostream>
using namespace std;
void NhapMang(int a[], int &n)
{
	cout << "Nhap vao gia tri phan tu mang\n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void SC(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << " ";
		}
	}
}
void SoDuong(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			cout << a[i] << " ";
		}
	}
}
void SoAm(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			s += a[i];
		}
	}
	cout << s << endl;
}
void TimX(int a[], int n, int x)
{
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			cout << i << " ";
		}
	}
}
void LN(int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	cout << max << endl;
}
void NN(int a[], int n)
{
	int min = a[0];
	for (int i = 0; i < n; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	cout << min << endl;
}
bool KTSC(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			return false;
		}
	}
	return true;
}
int main()
{
	int choice;
	do {
		cout << "\n--MENU--\n";
		cout << "1. Tao mang 1 chieu\n";
		cout << "2. Xuat mang 1 chieu\n";
		cout << "3. Xuat so chan trong mang\n";
		cout << "4. Xuat so duong trong mang\n";
		cout << "5. Xuat tong so am trong mang\n";
		cout << "6. Tim vi tri x trong mang\n";
		cout << "7. So lon nhat trong mang\n";
		cout << "8. So nho nhat trong mang\n";
		cout << "9. Ktra mang co toan so chan\n";
		cout << "Nhap vao lua chon\n";
		cin >> choice;
		switch (choice) {
		case 0:
			cout << "Da thoat chuong trinh\n";
			break;
		default:
			cout << "Vui long nhap lai\n";
			break;
		case 1:
			int a[100], n;
			cout << "Nhap vao so phan tu mang ";
			cin >> n;
			NhapMang(a, n);
			break;
		case 2:
			XuatMang(a, n);
			break;
		case 3:
			SC(a, n);
			break;
		case 4:
			SoDuong(a, n);
			break;
		case 5:
			SoAm(a, n);
			break;
		case 6:
			int x;
			cout << "Nhap vao X ";
			cin >> x;
			TimX(a, n, x);
			break;
		case 7:
			LN(a, n);
			break;
		case 8:
			NN(a, n);
			break;
		case 9:
			if (KTSC(a, n)) {
				cout << "Mang toan so chan" << endl;
			}
			else {
				cout << "Co so le trong mang" << endl;
			}
			break;
		}
	} while (choice != 0);
}