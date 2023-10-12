#include <iostream>
#include <math.h>
using namespace std;
bool SNT(int n)
{
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
void KTSochan(int n)
{
	while (n > 0) {
		int c = n % 10;
		if (c % 2 == 0) {
			cout << c << " ";
		}
		n /= 10;
	}
}
void BCNN(int a, int b)
{
	int tong = a * b;
	while (a != b)
	{
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	cout << "UCLN la: " << a << endl;
	cout << "BCNN la: " << tong / a << endl;
}
void TongSTN(int n)
{
	int s = 0;
	int i = 1;
	while (i < n) {
		s = s + i;
		i++;
	}
	cout << "TongSTN < n la: " << s << endl;
}
void NhapSNRan()
{
	int n;
	int s = 0;
	do {
		cout << "Nhap 1 so nguyen: ";
		cin >> n;
		s = s + n;
	} while (n != 0);
	cout << "Tong cac so nguyen vua nhap la: " << s << endl;
}
void Nhap3So()
{
	int n, i = 0;
	while (true)
	{
		cout << "Nhap mot so nguyen co 3 chu so khac nhau: ";
		cin >> n;
		if (n < 100 || n > 999)
		{
			break;
		}
		else
		{
			int a = n / 100;
			int b = (n / 10) % 10;
			int c = n % 10;
			if (a != b && a != c && b != c)
			{
				i++;
			}
			else {
				break;
			}
		}
	}
	cout << "So nguyen da nhap la: " << i << endl;
}
bool ToanSC(int n)
{
	while (n>0) {
		int c = n % 10;
		if (c % 2 != 0) {
			return false;
		}
		n /= 10;
	}
	return true;
}
bool ToanSL(int n)
{
	while (n > 0) {
		int c = n % 10;
		if (c % 2 == 0) {
			return false;
		}
		n /= 10;
	}
	return true;
}
bool TangDan(int n)
{
	while (n > 0) {
		int c = n % 10;
		n /= 10;
		int p = n % 10;
		if (c < p) {
			return false;
		}
	}
	return true;
}
bool GiamDan(int n)
{
	int lastDigit = n % 10;
	n /= 10;
	while (n > 0) {
		int currentDigit = n % 10;
		n /= 10;
		if (currentDigit < lastDigit) {
			return false;
		}
		lastDigit = currentDigit;
	}
	return true;
}
int main()
{
	int choice;
	do {
		cout << "--MENU--\n";
		cout << "1. Ktra so nguyen to\n"; 
		cout << "2. Ktra so chan\n";
		cout << "3. Tinh BCNN\n";
		cout << "4. Tong STN nho hon n\n";
		cout << "5. Tong STN do nguoi dung nhap\n";
		cout << "6. Dem so khac nhau trong ba so\n";
		cout << "7. Ktra day n co toan so chan k\n";
		cout << "8. Ktra day n co toan so le k\n";
		cout << "9. Ktra day n co tang dan tu trai qua phai k\n";
		cout << "10. Ktra day n co giam dan tu trai qua phai k\n";
		cout << "0. De thoat\n";
		cout << "Nhap lua chon cua ban ";
		cin >> choice;
		switch (choice) {
		case 0:
			cout << "Da thoat chuong trinh\n";
			break;
		case 1:
			int n;
			cout << "Nhap vao so nguyen n ";
			cin >> n;
			if (SNT(n)) {
				cout << n << " la SNT" << endl;
			}
			else {
				cout << n << " khong phai SNT" << endl;
			}
			break;
		case 2:
			int N;
			cout << "Nhap vao so nguyen ";
			cin >> N;
			KTSochan(N);
			break;
		case 3:
			int a, b;
			cout << "Nhap vao 2 so nguyen a, b ";
			cin >> a >> b;
			BCNN(a, b);
			break;
		case 4:
			int m;
			cout << "Nhap so tu nhien n ";
			cin >> m;
			TongSTN(m);
			break;
		case 5:
			NhapSNRan();
			break;
		case 6:
			Nhap3So();
			break;
		default:
			cout << "Vui long nhap lai\n";
			break;
		case 7:
			int M;
			cout << "Nhap vao so nguyen ";
			cin >> M;
			if (ToanSC(M)) {
				cout << "Day n toan so chan\n";
			}
			else {
				cout << "Xuat hien so le trong day n\n";
			}
			break;
		case 8:
			int x;
			cout << "Nhap vao so nguyen ";
			cin >> x;
			if (ToanSL(x)) {
				cout << "Day n toan so le\n";
			}
			else {
				cout << "Xuat hien so chan trong day n\n";
			}
			break;
		case 9:
			int p;
			cout << "Nhap vao so nguyen ";
			cin >> p;
			if (TangDan(p)) {
				cout << "Day so tang dan tu trai qua phai\n";
			}
			else {
				cout << "Day so khong tang dan\n";
			}
			break;
		case 10:
			int P;
			cout << "Nhap vao so nguyen ";
			cin >> P;
			if (GiamDan(P)) {
				cout << "Day so giam dan tu trai qua phai\n";
			}
			else {
				cout << "Day so khong giam dan\n";
			}
			break;
		}
	} while (choice != 0);
	return 0;
}