#include <iostream>
using namespace std;
void NhapMang(int a[], int &n,int &x)
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
int main()
{
	int a[100], n, x;
	cout << "Nhap vao do dai cua mang\n";
	cin >> n;
	NhapMang(a, n, x);
	cout << "Nhap vao so can tim\n";
	cin >> x;
	XuatMang(a, n, x);
	return 0;
}