#pragma once
#include<iostream>
using namespace std;
#include"nguoi.h"
nguoi :: nguoi(){
    hoten = " ";
} 
nguoi :: ~nguoi(){
}
void nguoi :: input(){
        fflush(stdin);
        cout << "Nhap ho ten: ";
        getline(cin,hoten);
}
void nguoi :: output(){
    cout << "Ho va ten: " << hoten;
}