#include <iostream>
using namespace std;
void SL(int n)
{
	if (n % 2 != 0) {
		cout << "1\n";
	}
	else {
		cout << "0\n";
	}
}
int main()
{
	int n;
	cout << "Nhap vao so nguyen n\n";
	cin >> n;
	SL(n);
	return 0;
}