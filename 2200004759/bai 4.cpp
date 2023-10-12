#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
#define MAXROW 100
#define MAXCOL 100
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
	int a[MAXROW][MAXCOL];
	int n;
	cout << "Nhap vao cap cua ma tran";
	cin >> n;
	NhapM2C(a, n);
	SoNT(a, n);
	return 0;
}