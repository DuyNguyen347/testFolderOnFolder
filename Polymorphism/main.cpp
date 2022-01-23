#include<iostream>
using namespace std;
#include"iomanip"
#include"dat.h"
#include"dat.cpp"
#include"datCN.h"
#include"datCN.cpp"
#include"datTG.h"
#include"datTG.cpp"
#include"datHT.h"
#include"datHT.cpp"
float tongS(dat **ds,int n ){
    float s= 0;
    for (int i=0;i<n;i++){
        s+= ds[i]->dientich();
    }
    return s;
}
float tongtien(dat **ds,int n){
    float tien = 0;
    for(int i=0;i<n;i++){
        tien += ds[i]->tinhtien();
    }
    return tien;
}
void xuatDS(dat **ds,int n){
    for(int i=0;i<n;i++){
        ds[i]->xuat();
    }
}
int main(){
    dat *ds[100];
    int n=0;
    int lc;
    do{
        system("cls");
        cout << "\t\t\tMENU\t\t\t" <<endl;
        cout << "1.Them dat hinh chu nhat" <<endl;
        cout <<"2.Them dat hinh tam giac" << endl;
        cout <<"3.Them dat hinh thang" <<endl;
        cout << "4.Xuat thong tin danh sach dat." << endl;
        cout << "5.Tinh tong dien tich cac mieng dat" <<endl;
        cout << "6.Tinh tong tien cac mieng dat:" << endl;
        cout << "7.Thoat" << endl;
        cout << "Nhap lua chon: " <<endl;
        cin >> lc;
        switch(lc){
            case 1:
            ds[n] = new hinhCN ();
            ds[n]->nhap();
            n++;
            break;
            case 2:
            ds[n] = new hinhTG();
            ds[n]->nhap();
            n++;
            break;
            case 3:
            ds[n] = new hinhThang();
            ds[n]->nhap();
            n++;
            break;
            case 4:
            cout << "Danh sach mieng dat:" <<endl;
            xuatDS(ds,n);
            system("pause");
            break;
            case 5:
            cout << "Tong dien tich cac mieng dat:" <<tongS(ds,n) <<endl;
            system("pause");
            break;
            case 6:
            cout <<"Tong tien cac mieng dat:" <<tongtien(ds,n) <<endl;
            system("pause");
            break;
            case 7:
            break;
            default:
            cout << "Nhap sai moi nhap lai.";
            break;
        }

        if(n == 100) break;
    }while(lc > 0 && lc < 7);
return 0;
}
