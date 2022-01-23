#pragma once
#include<iostream>
using namespace std;
#include"nguoi.h"
#include"giangvien.h"
#include"sinhvien.h"
#ifndef QUANLI_H
#define QUANLI_H
class quanli{
    private:
    sinhvien *sv;
    int nSV;
    giangvien  *gv;
    int nGV;
    public:
    quanli();
    ~quanli(){
        delete [] sv;
        delete [] gv;
    };
    void addSV();
    void addGV();
    void input();
    void output();
    void xuatDanhSachKhenThuong();
};  
#endif  