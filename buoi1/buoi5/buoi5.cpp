#include <iostream>
#include <string>
using namespace std;

void cau1() {
	int a, b;
	cout << "Nhap a,b:";
	cin >> a >> b;
	if (a == 0) {
		if (b == 0)
			cout << "Phuong trinh vo so nghiem :" << endl;
		else
			cout << "Phuong trinh vo nghiem:" << endl;
	}
	else {
		cout << "Nghiem la : " << (-b * 1.0 / a) << endl;
	}
}








void cau4() {
	int thang;
	cout << "Nhap thang :";
	cin >> thang;
	if (thang <= 3) {
		cout << "Quy 1";
	}
	else if (thang <= 6) {
		cout << "Quy 2";
	}
	else if (thang <= 9) {
		cout << " quy3";
	}
	else {
		cout << "Quy 4";

	}
}
int main() 
{
	cau4();

}