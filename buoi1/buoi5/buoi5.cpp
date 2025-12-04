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

int main()
{
	cau1();

}