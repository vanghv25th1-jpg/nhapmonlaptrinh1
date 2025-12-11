#include <iostream>
using namespace std;



    
    ///*{
    //for (int i = 1; i <= 5; i++) {
    //    cout << "For Hello :" << i << endl;
    //}
    //int j = 1;
    //while (j <= 5) {
    //    cout << " While Hello :" << j << endl;
    //    j++;
    //}
    //int k = 1;
    //do {
    //    cout << " do . . While Hello :" << k << endl;
    //    k++;
    //} while (k <= 5);*/

    
////
////void cau1() {
////    int n, tong = 0;
////    cout << "Nhap n: ";
////    cin >> n;
////    for (int i = 1; i <= n; i++) {
////        tong += i;
////    }
////    cout << "Tong : " << tong << endl;
////}


   

   
////
////void cau2() {
////    int n, tich = 1;
////    cout << "Nhap n: ";
////    cin >> n;
////    for (int i = 1; i <= n; i++) {
////        tich *= i;
////    }
////    cout << "tich : " << tich << endl;
////}

void cau3() {
    int x, n, tich = 2;
    cout << "Nhap x,n: ";
    cin >>x>>n;
    for (int i = 1; i <= n; i++) {
        tich *= i;
    }
    cout << "tich   la : " << tich << endl;
}

void cau4() {
    int n;
    cout << "Nhap bang cuu chuong :";
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << "=" << n * i << endl;
    }
}


void cau5() {
    int n;
    cout << "Nhap n:";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << endl;

        }
    }
}

void cau6() {
    int n,tong = 0;
    cout << "Nhap n:";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            tong += i;
            cout << i << endl;

        }
    }
    cout << "Tong cac uoc : " << tong << endl;
}


void cau7() {
    int n, tong = 0;
    cout << "Nhap n:";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            tong += i;

        }
    }
    if (tong == n)
        cout << n << " la so hoan thien" << endl;
    else {
        cout << n << " Khong la so hoan thien: " << endl;
    }
}

int main()
{
    cau7();
}









    