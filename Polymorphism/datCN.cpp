#pragma once
#include<iostream>
using namespace std;
#include"datCN.h"
hinhCN :: hinhCN(){
    dai = 0;
    rong =0;
}
void hinhCN :: xuat(){
    cout << "Dat hinh chu nhat:" << endl;
    cout << "Chieu dai: " << dai <<endl;
    cout << "Chieu rong: " << rong <<endl;
    dat :: xuat() ;
}
void hinhCN :: nhap(){
    dat :: nhap();
    cout << "Nhap chieu dai: " ;
    cin >> dai;
    cout << "Nhap chieu rong: ";
    cin >> rong;
}
float hinhCN :: dientich() {
        return dai*rong;
    }
float hinhCN :: tinhtien(){
    return dongia * dientich();
}
