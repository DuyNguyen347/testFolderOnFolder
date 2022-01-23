#pragma once
#include<iostream>
using namespace std;
#include"dat.h"
#ifndef DATHT_H
#define DATHT_H
class hinhThang: public dat{
    private:
    int daylon;
    int daynho;
    int cao;
    public:
    void xuat();
    void nhap();
    float dientich();
    float tinhtien();
};
#endif