#pragma once
#include"datHT.h"
#include<iostream>
using namespace std;
void hinhThang :: xuat(){
    cout << "Dat hinh thang: " <<endl;
    cout << "Day lon: " << daylon <<endl;
    cout << "Day nho: " << daynho <<endl;
    cout << "Chieu cao: " << cao <<endl;
    dat :: xuat() ;
}
void hinhThang :: nhap(){
    dat :: nhap();
    cout << "Nhap chieu cao: " ;
    cin >> cao;
    cout << "Nhap day lon: " ;
    cin >> daylon;
    cout << "Nhap day nho: ";
    cin >> daynho;
}
float hinhThang :: dientich(){
        return (daylon + daynho) * cao / 2;
    }
float hinhThang :: tinhtien(){
    return dientich() * dongia* 0.9;
}