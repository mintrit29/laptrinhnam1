#include <iostream>
using namespace std;
bool NamNhuan(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
		return true;
	}
	return false;
}
int main()
{
	int n;
	cout << "So nguyen duong\n";
	cin >> n;
	if (NamNhuan(n)) {
		cout << "1" << endl;
	}
	else {
		cout << "0" << endl;
	}
	return 0;
}