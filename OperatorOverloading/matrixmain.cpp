#include<iostream>
using namespace std;
#include "matrix.h"
int main(){
    // khoi tao ma tran 
    matran d(3);
    cout << "Nhap ma tran 1:" <<endl;
    cin >> d;// nhap ma tran 
    cout << "Ma tran 1:" <<endl;
    cout << d;// xuat ma tran
    matran e(3);
    cout << "Nhap ma tran 2: " <<endl;
    cin >> e ;
    cout << "Ma tran 2:";
    cout << e;
    cout << "tong 2 ma tran: ";
    matran f = d  + e;// tong 2 ma tran
    cout << f;
    cout << "hieu 2 ma tran : ";
    matran g = d - e;// hieu 2 ma tran
    cout << g ;
    cout << "tich 2 ma tran: ";
    matran h = d *e;// tich 2 ma tran
    cout << h;
    cout << "gan ma tran :" <<endl;
    matran k = d;// phep gan ma tran
    cout << k; 
}