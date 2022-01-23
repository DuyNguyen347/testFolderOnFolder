#pragma once
#include<iostream>
using namespace std;
#ifndef NGUOI_H
#define NGUOI_H
class nguoi{
    private:
    string hoten;
    public:
    nguoi();
    ~nguoi();
    void input();
    void output();
};
#endif