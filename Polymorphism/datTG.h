#pragma once
#include<iostream>
using namespace std;
#include"dat.h"
#ifndef DATTG_H
#define DATTG_H
class hinhTG: public dat{
    private:
    int day;
    int cao;
    public:
    void xuat();
    void nhap();
    float dientich();
    float tinhtien();
};
#endif 