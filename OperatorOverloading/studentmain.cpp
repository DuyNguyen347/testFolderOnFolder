#include<iostream>
using namespace std;
#include"student.h"
#include"student.cpp"
#include"dshs.h"
#include"dshs.cpp"
istream &operator >> (istream &in,dshs &ds);
ostream &operator << (ostream &out ,const dshs &ds);
istream &operator >> (istream &in, student &p) ;
ostream &operator << (ostream &out ,const student &p);
bool operator > (student &a,student &b);
bool operator < (student &a,student &b);
void hoanvi(student &a,student &b);
void sapxep(dshs &a);
int main (){
    int a;
    cout << "Nhap so luong hs : ";
    cin >> a;
    dshs p(a);
    cin >> p; 
    cout << "Danh sach hoc sinh"<<endl;
    cout << p;
    cout << "Danh sach hoc sinh da sap xep"<<endl;
    sapxep(p);
    cout << p;

    // int lc ;
    // do{
    //     cout << "1.In ra danh sach hoc sinh:" <<endl;
    //     cout << "2.Sap xep danh sach hoc sinh dua tren diem trung binh:"<<endl;
    //     cout << "3.Thoat:" <<endl;
    //     cout << "Nhap chuc nang can thuc hien:";
    //     cin >> lc;
    //     switch (lc)
    //     {
    //     case 1:
    //     cout << p;
    //         break;
    //     case 2:
    //     sapxep(p);
    //     default:
    //         break;
    //     }
    // }while (lc>0 && lc<3);
    
    

    return 0;
    //p.Nhap();
    // int lc;
    // do{
    //     system("cls");
    // cout << "Danh sach cac cong viec:"<<endl;
    // cout << "1.In ra danh sach thong tin hoc sinh:" << endl;
    // cout << "2.Thay doi ho va ten:" <<endl;
    // cout << "3.Thay doi diem toan: " <<endl;
    // cout << "4.Thay doi diem van: " <<endl;
    // cout << "5.In ra diem trung binh hien tai:" <<endl;
    // cout << "6.Xep loai: " <<endl;
    // cout << "7.Thoat chuong trinh:"<<endl;
    // cout << "Chon cong viec can thuc hien:"<<endl;
    // cin >> lc;
    // switch (lc){
    //     case 1:
    //     p.Xuat();
      // break;
        // case 2:
        // {
        // string name;
        // cout << "Nhap ho va ten:";
        // fflush(stdin);
        // getline(cin , name);
        // p.setHoten(name);
        // }
        // break;
        // case 3:
        // {
        // double toan;
        // cout << "Nhap diem toan:" ;
        // cin >> toan;
        // p.setDiemtoan(toan);
        // break;
        // }
        // case 4:
        // {
        // double van;
        // cout << "Nhap diem van:";
        // cin >> van;
        // p.setDiemvan(van);
        // break;
        // }
        // case 5:
        // cout << "Diem trung binh hien tai:" << p.gpa() <<endl;
        // break;
        // case 6:
        // p.xeploai();
        // cout <<endl;
        // default:
        // break;
    // }
    // system("pause");
    // } while (lc >0 && lc<7);
    
}
 


