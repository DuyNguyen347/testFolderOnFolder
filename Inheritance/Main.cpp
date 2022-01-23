#include<iostream>
#include<string.h>
using namespace std;
#include"quanli.h"
#include"quanli.cpp"
int main(){
quanli *x = new quanli;
    int lc;
    do{
    system("cls");
    cout << "\t\t\t---MENU---\t\t\t" <<endl;
    cout<< "1.Nhap danh sach:" <<endl;
    cout << "2.Xuat danh sach: " <<endl;
    cout << "3.Xuat danh sach khen thuong: " <<endl;
    cout << "4.Thoat." <<endl;
    cout << "Nhap luc chon: " ;
    cin >> lc ;
    switch(lc){
        case 1: 
        x-> input();
        break;
        case 2: 
        x-> output();
        break;
        case 3:
        x-> xuatDanhSachKhenThuong();
        break;
        default:
        break;
    }
    system("pause");
    } while (lc>0 && lc <4);
    // x-> input();
    // x-> output();
    // x-> xuatDanhSachKhenThuong();
    delete x;
    return 0;

}