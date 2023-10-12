//Bai3
#include <iostream>
using namespace std;
void PhepToan(int a, int b)
{
	int tich = a * b;
	cout << "A * B = " << tich << endl;
	float thuong = (float)a / (float)b;
	cout << "A / B = " << thuong << endl;
	int tong = a + b;
	cout << "A + B = " << tong << endl;
	int hieu = a - b;
	cout << "A - B =" << hieu << endl;
}
int main()
{
	int a, b;
	cout << "Nhap vao 2 so nguyen a, b: \n";
	cin >> a >> b;
	PhepToan(a, b);
	return 0;
}
