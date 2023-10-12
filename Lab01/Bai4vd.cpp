//Bai4
#include <iostream>
using namespace std;
void Bai4(int ngayden, int ngaydi)
{
	int donGiaTuan = 650, donGiaNgay = 100;
	int songayo = ngaydi - ngayden + 1;
	int sotuano = songayo / 7;
	int songayle = songayo % 7;
	int Tongtien = sotuano * donGiaTuan + songayo * donGiaNgay;
	cout << "So tuan o la: " << sotuano << endl;
	cout << "So ngay le: " << songayle << endl;
	cout << "Tong tien phai tra la: " << Tongtien << endl;
}
int main()
{
	int m, n;
	cout << "Nhap vao ngay den va ngay di: \n";
	cin >> m >> n;
	Bai4(m, n);
	return 0;
}