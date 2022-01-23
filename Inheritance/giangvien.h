#pragma once
#include<iostream>
using namespace std;
#include"nguoi.h"
#ifndef GIANGVIEN_H
#define GIANGVIEN_H
class giangvien : public nguoi{
    private:
    string mon;
    int sobaibao;
    public:
    giangvien();
    ~giangvien();
    void input();
    void output();
    int getSBB();
};
#endif