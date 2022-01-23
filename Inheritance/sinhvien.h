#pragma once
#include<iostream>
using namespace std;
#include"nguoi.h"
#ifndef   SINHVIEN_H
#define   SINHVIEN_H
class sinhvien : public nguoi{
    private:
    string lop;
    float dtb;
    public :
    sinhvien();
    ~sinhvien();
    void input();
    void output();
    int getDTB();
};
#endif