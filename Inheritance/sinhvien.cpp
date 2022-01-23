#pragma once
#include<iostream>
using namespace std;
#include"sinhvien.h"
sinhvien :: sinhvien(){
    lop = " ";
    dtb = 0;
}
sinhvien :: ~sinhvien(){

}
void sinhvien :: input(){
    nguoi:: input();
    cout << "Nhap lop";
    fflush(stdin);
    cin >> lop;
    cout << "Nhap diem trung binh: ";
    cin >> dtb;
}
void sinhvien :: output(){
    nguoi :: output();
    cout << "\nLop: " << lop<< endl;
    cout << "Diem trung binh: " << dtb<<endl;
}
int sinhvien :: getDTB(){
    return dtb;
}