#include <iostream>
using namespace std;
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
int main()
{
	int a[100], n;
	cout << "So luong phan tu mang ";
	cin >> n;
	NhapMang(a, n);
	int x;
	cout << "Gia tri x ";
	cin >> x;
	TimX(a, n, x);
	return 0;
}