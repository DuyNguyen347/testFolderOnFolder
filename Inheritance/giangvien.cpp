#pragma once
#include<iostream>
using namespace std;
#include"giangvien.h"
giangvien :: giangvien(){
    mon = " ";
    sobaibao = 0;
}
giangvien :: ~giangvien(){

}
void giangvien:: input(){
    nguoi :: input();
    cout << "Nhap bo mon: " ;
    fflush(stdin);
    getline(cin,mon);
    cout << "Nhap so bai bao";
    cin >> sobaibao;
}
void giangvien:: output(){
    nguoi :: output();
    cout << "\nBo mon: " << mon <<endl;
    cout << "So bai bao khoa hoc" << sobaibao <<endl; 
}
int giangvien :: getSBB(){
    return sobaibao;
}