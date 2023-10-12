#include<iostream>
#include<math.h>
using namespace std;
void SNT(int n)
{
	if (n < 2) {
		cout << "0";
	}
	if (n == 2) {
		cout << "1";
	}
	if (n > 2) {
		for (int x = 2; x < n ; x++) {
			if (n % x != 0) {
				cout << "1";
				break;
			}
			else {
				cout << "0";
				break;
			}
		}
	}
}
int main()
{
	int n;
	cout << "Nhap so nguyen\n";
	cin >> n;
	SNT(n);
	return 0;
}