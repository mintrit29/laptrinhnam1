#include <iostream>
using namespace std;
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
int main()
{
	int a[100], n;
	NhapMang(a, n);
	SoNN(a, n);
	SoLN(a, n);
	GiaTriTB(a, n);
	return 0;
}