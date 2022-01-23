#pragma once
#include"datTG.h"
#include<iostream>
using namespace std;
void hinhTG :: xuat(){
    cout << "Dat hinh tam giac: " << endl;
    cout << "Day: " << day <<endl;
    cout << "CHieu cao: " << cao <<endl;
    dat :: xuat() ;
}
void hinhTG :: nhap(){
    dat :: nhap();
    cout << "Nhap chieu cao: " ;
    cin >> cao;
    cout << "Nhap day: " ;
    cin >> day;
}
float hinhTG :: dientich(){
        return day * cao /2;
    }
float hinhTG :: tinhtien(){
    return dientich() * dongia* 0.9;
}