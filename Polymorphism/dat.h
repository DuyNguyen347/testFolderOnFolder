#include<iostream>
using namespace std;
#ifndef DAT_H
#define DAT_H
class dat{
    protected:
    string maso;
    unsigned int dongia;
    public:
    dat();
    //dat(string ms = " ",int dg =0);
    virtual void xuat();
    virtual void nhap();
    virtual float dientich() =0  ;
    virtual float tinhtien() =0 ;
    virtual ~dat(){};
    friend class quanly;
};
#endif