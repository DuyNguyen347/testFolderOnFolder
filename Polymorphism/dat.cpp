#pragma once
#include "dat.h"
#include<iostream>
using namespace std;
dat :: dat(){
}
void dat :: xuat() {
    cout << "ma so: " << setw(10) << maso  <<endl;
    cout << "Gia(tinh tren 1m2): " << setw(10) << dongia <<endl;
    cout << "Dien tich: " << dientich() << endl;
    cout << "Gia " << tinhtien() <<endl;
}
void dat:: nhap(){
    fflush(stdin);
    cout << "Nhap ma so mieng dat: ";
    getline(cin,maso);
    cout << "Nhap don gia (tinh tren 1m2): " ;
    cin >> dongia;
}