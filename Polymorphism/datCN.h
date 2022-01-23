#pragma once
#include<iostream>
using namespace std;
#include"dat.h"
#ifndef DATCN_H
#define DATCN_H
class hinhCN : public dat{
    private:
    int dai;
    int rong;
    public:
    hinhCN();
    void xuat();
    void nhap();
    float dientich() ;
    float tinhtien();
};
#endif
