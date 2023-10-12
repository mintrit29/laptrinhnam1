#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
void TinhDiem(float TL, float GK, float CK)
{
	float diemTB = 0.2 * TL + 0.3 * GK + 0.5 * CK;
	if (diemTB >= 8.5) {
		cout << "Ban duoc diem A" << endl;
	}
	else if (diemTB >= 7.0) {
		cout << "Ban duoc diem B" << endl;
	}
	else if (diemTB >= 5.5) {
		cout << "Ban duoc diem C" << endl;
	}
	else if (diemTB >= 4.0) {
		cout << "Ban duoc diem D" << endl;
	}
	else {
		cout << "Ban duoc diem F" << endl;
	}
}
void Pheptoan(int a, int b, char pheptoan)
{
	switch (pheptoan)
	{
	case '+':
		cout << "A " << pheptoan << " B = " << a + b << endl; break;
	case '-':
		cout << "A " << pheptoan << " B = " << a - b << endl; break;
	case '*':
		cout << "A " << pheptoan << " B = " << a * b << endl; break;
	case '/':
		cout << "A " << pheptoan << " B = " << (float)a / (float)b << endl; break;
	}
}
void Thang(int t)
{
	if (t == 1) {
		cout << "January" << endl;
	}
	if (t == 2) {
		cout << "February" << endl;
	}
	if (t == 3) {
		cout << "March" << endl;
	}
	if (t == 4) {
		cout << "April" << endl;
	}
	if (t == 5) {
		cout << "May" << endl;
	}
	if (t == 6) {
		cout << "June" << endl;
	}
	if (t == 7) {
		cout << "July" << endl;
	}
	if (t == 8) {
		cout << "August" << endl;
	}
	if (t == 9) {
		cout << "September" << endl;
	}
	if (t == 10) {
		cout << "October" << endl;
	}
	if (t == 11) {
		cout << "November" << endl;
	}
	if (t == 12) {
		cout << "December" << endl;
	}
	else {
		cout << "Month is invalid" << endl;
	}
}
void NamNhuan(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
		cout << "Nam nhuan" << endl;
	}
	else {
		cout << "Nam khong nhuan" << endl;
	}
}
void Tongsonguyen()
{
	int s = 0;
	for (int i = 1; i <= 100; i++) {
		s += i;
	}
	cout << "Tong so tu 1-100: " << s << endl;
}
void Tongsonguyen1(int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s += i;
	}
	cout << "Tong so tu 1-"<<n<<": " << s << endl;
}
void Tongsochan(int m, int n)
{
	int s = 0;
	for (int i = m; i <= n; i++) {
		s += i;
	}
	cout << "Tong so tu "<<m<<" den " << n << ": " << s << endl;
}
int main()
{
	int choice;
	do {
		cout << "---MENU---\n";
		cout << "1. Tinh diem cua sinh vien\n";
		cout << "2. Tinh toan\n";
		cout << "3. Xuat thang bang tieng Anh\n";
		cout << "4. Kiem tra nam nhuan hay khong\n";
		cout << "5. Tong cac so tu 1-100\n";
		cout << "6. Tong cac so tu 1-n\n";
		cout << "7. Tong cac so tu m-n\n";
		cout << "0. De thoat\n";
		cout << "Nhap vao lua chon cua ban.\n";
		cin >> choice;
		switch (choice) {
		case 0:
			cout << "Da thoat chuong trinh.\n";
			break;
		case 1:
			float TL, GK, CK;
			cout << "Nhap vao diem tieu luan, giua ki, cuoi ki\n";
			cin >> TL >> GK >> CK;
			TinhDiem(TL, GK, CK);
			break;
		case 2:
			int a, b;
			cout << "Nhap vao hai so nguyen a, b\n";
			cin >> a >> b;
			char pheptoan;
			cout << "Nhap vao phep toan can thuc hien\n";
			cin >> pheptoan;
			Pheptoan(a, b, pheptoan);
			break;
		case 3:
			int t;
			cout << "Nhap vao thang\n";
			cin >> t;
			Thang(t);
			break;
		case 4:
			int n;
			cout << "Nhap vao so nam can kiem tra\n";
			cin >> n;
			NamNhuan(n);
			break;
		case 5:
			Tongsonguyen();
			break;
		case 6:
			int m;
			cout << "Nhap vao so nguyen can tinh\n";
			cin >> m;
			Tongsonguyen1(m);
			break;
		case 7:
			int M,N;
			cout << "Nhap vao so nguyen can tinh\n";
			cin >> M >> N;
			Tongsochan(M, N);
			break;
		default:
			cout << "Nhap sai vui long nhap lai.\n";
		}
	} while (choice != 0);
}