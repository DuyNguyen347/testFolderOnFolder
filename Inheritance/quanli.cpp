#pragma once
#include<iostream>
using namespace std;
#include"quanli.h"
quanli :: quanli(){
    nSV =0;
    nGV =0;
    sv = new sinhvien [nSV];
    gv = new giangvien [nGV];
}
void quanli :: addSV(){
    sinhvien *newSV;
    int newNsv = nSV +1;
    newSV = new sinhvien[newNsv];
    for(int i=0;i<nSV;i++){
        newSV[i] = sv[i];
    }
    delete [] sv;
    cout << "Nhap thong tin sinh vien: " << endl;
    newSV[newNsv-1].input();
    sv = newSV;
    nSV = newNsv;

}
void quanli :: addGV(){
    giangvien *newGV;
    int newNgv = nGV +1;
    newGV = new giangvien[newNgv];
    for(int i=0;i<nGV;i++){
        newGV[i] = gv[i];
    }
    delete [] gv;
    cout << "Nhap thong tin giang vien:" <<endl;
    newGV[newNgv-1].input();
    gv = newGV;
    nGV = newNgv;
}



void quanli:: input(){
    int lc;
    while (true){
        system("cls");
        cout << "\t\t\t----QuanLi----\t\t\t"<<endl;
        cout << "1.Nhap danh sach sinh vien:" <<endl;
        cout << "2.Nhap danh sach giang vien" <<endl;
        cout << "3.Thoat" <<endl;
        cout << "Nhap lua chon:";
        cin >> lc;
        if(lc ==1){
            addSV();
        }
        else if(lc == 2){
            addGV();
        }
        else if(lc == 3 ) break;
        else {
            cout << "Vui long nhap lai";
            system("pause");
        }
    }
}
void quanli :: output(){
    cout<< "\t\t\t---DANH SACH SINH VIEN---\t\t\t"<<endl;
    for(int i=0;i< nSV;i++){
        cout<< "Thong tin sinh vien thu " << i+1<<endl;
        sv[i].output();
    }
    cout<< "\t\t\t---DANH SACH GIANG VIEN---\t\t\t"<<endl;
    for(int i=0;i< nGV;i++){
        cout<< "Thong tin giang vien thu " << i+1<<endl;
        gv[i].output();
    }
}
void quanli :: xuatDanhSachKhenThuong(){
    cout << "\t\t\t---DANH SACH SINH VIEN DUOC KHEN THUONG---\t\t\t" <<endl;
    for(int i=0;i<nSV;i++){
        if(sv[i].getDTB() >= 8) {
            sv[i].output();
        }
    }
    cout << "\t\t\t---DANH SACH GIANG VIEN DUOC KHEN THUONG---\t\t\t" <<endl;
    for(int i=0;i<nGV;i++){
        if(gv[i].getSBB() >= 3 ){
            gv[i].output();
        }
    }
}