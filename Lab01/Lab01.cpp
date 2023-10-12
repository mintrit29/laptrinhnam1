#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
void Phepchia(int a, int b)
{
	int nguyen = a / b;
	int du =  a % b;
	cout << "Phan nguyen cua A / B = " << nguyen << endl;
	cout << "Phan du cua A / B = " << du << endl;
}
void Hinhtron(int r)
{
	float pi = 3.14;
	float C = 2 * pi * r;
	float S = pi * r * r;
	cout << "Chu vi hinh tron la: " << C << endl;
	cout << "Dien tich hinh tron la: " << S << endl;
}
void CsangF(float c)
{
	float F = (c * 9 / 5) + 32;
	cout << "F = " << fixed << setprecision(2) << F << endl;
}
void SLN2(int a, int b)
{
	if (a < b) {
		cout << "So lon nhat la: " << b << endl;
	}
	else {
		cout << "So lon nhat la: " << a << endl;
	}
}
void SLN3(int a, int b, int c)
{
	int max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	cout << "So lon nhat la: " << max << endl;
}
void KTBoiso(int a, int b)
{
	if (a % b == 0) {
		cout << a << " la " << "boi so cua " << b << endl;
	}
	else {
		cout<< a << " ko phai la " << "boi so cua " << b << endl;
	}
}
void PTBac1(float a, float b)
{
	float x;
	if (a == 0) {
		if (b == 0) {
			cout << "PT vo so nghiem\n";
		}
		else {
			cout << "PT vo nghiem\n";
		}
	}
	else {
		x = -b / a;
		cout << "PT co nghiem x = " << x << endl;
	}
}
void HCN(float a, float b)
{
	float s = a * b;
	float p = 2 * (a + b);
	float dgcheo = sqrt(a * a + b * b);
	cout << "Dien tich HCN: " << s << endl;
	cout << "Chu vi HCN: " << p << endl;
	cout << "Do dai duong cheo HCN: " << dgcheo << endl;
}
void PTBac2(float a, float b, float c)
{
	float delta = b * b - 4 * a * c;
	float x1, x2;
	if (delta < 0) {
		cout << "Phuong trinh vo nghiem" << endl;
	}
	else if (delta == 0) {
		x1 = -b / (2 * a);
		cout << "Phuong trinh co nghiem kep x = " << x1 << endl;
	}
	else {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "Phuong trinh co 2 nghiem pb x1 = " << x1 << " x2 = " << x2 << endl;
	}
}
int main()
{
	int choice;
	do {
		cout << "---Menu---\n";
		cout << "1. Tinh phan nguyen va phan du cua phep chia\n";
		cout << "2. Tinh chu vi va dien tich hinh tron\n";
		cout << "3. Doi tu do C sang do F\n";
		cout << "4. Tim so lon nhat trong 2 so\n";
		cout << "5. Tim so lon nhat trong 3 so\n";
		cout << "6. Kiem tra a co la boi so cua b hay khong\n";
		cout << "7. PT bac 1\n";
		cout << "8. S,P,Do dai dg cheo HCN\n";
		cout << "9. PT bac 2\n";
		cout << "Nhap vao lua chon cua ban:\n";
		cin >> choice;
		switch (choice) {
		case 0:
			cout << "Da thoat chuong trinh.\n";
			break;
		case 1:
			int a, b;
			cout << "Nhap vao 2 so nguyen\n";
			cin >> a >> b;
			Phepchia(a, b);
			break;
		case 2:
			int r;
			cout << "Nhap vao ban kinh duong tron\n";
			cin >> r;
			Hinhtron(r);
			break;
		case 3:
			float c;
			cout << "Nhap vao do C\n";
			cin >> c;
			CsangF(c);
			break;
		case 4:
			int A, B;
			cout << "Nhap vao 2 so nguyen a, b\n";
			cin >> A >> B;
			SLN2(A, B);
			break;
		case 5:
			int x, y, z;
			cout << "Nhap vao 3 so nguyen a, b, c\n";
			cin >> x >> y >> z;
			SLN3(x, y, z);
			break;
		case 6:
			int X, Y;
			cout << "Nhap vao 2 so nguyen a, b\n";
			cin >> X >> Y;
			KTBoiso(X, Y);
			break;
		case 7:
			float m, n;
			cout << "Nhap vao 2 so nguyen a, b\n";
			cin >> m >> n;
			PTBac1(m, n);
			break;
		case 8:
			float d, f;
			cout << "Nhap vao chieu dai va chieu rong cua HCN\n";
			cin >> d >> f;
			HCN(d, f);
			break;
		case 9:
			float j, k, l;
			cout << "Nhap vao pt bac 2\n";
			cin >> j >> k >> l;
			PTBac2(j, k, l);
			break;
		default:
			cout << "Nhap sai vui long nhap lai.\n";
		}
	} while (choice != 0);
}