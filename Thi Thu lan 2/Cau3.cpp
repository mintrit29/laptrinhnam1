#include <iostream>
using namespace std;
void NhapMang(int a[], int& n)
{
	cout << "Nhap vao phan tu cua mang\n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void XuatMang(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++) {
		s = s + a[i];
	}
	float TBC =(float) s /(float) n;
	cout << TBC << endl;
}
int main()
{
	int a[100];
	int n;
	cout << "Nhap vao so luong mang\n";
	cin >> n;
	NhapMang(a, n);
	XuatMang(a, n);
	return 0;
}