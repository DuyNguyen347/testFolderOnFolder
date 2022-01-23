#include<iostream>
using namespace std;
#ifndef STUDENT_H
#define STUDENT_H
#include<string>
class student{
      private:
      //int mssv;
      string hoten;
      // string lop;
      // string gioitinh;
      // string ngaysinh;
      double diemtoan;
      double diemly;
      double diemtin;
      double dtb;
      string xeploai;
      static int count;
      //string hocbong;
      public:
      student(string ht=" ",double t=0,double l=0,double ti=0);
      student(const student &p);
      friend istream &operator >> (istream &in, student &p) ;
      friend ostream &operator << (ostream &out ,const student &p);
      friend bool operator > (student &a,student &b);
      friend bool operator < (student &a,student &b);
      friend bool operator == (student &a,student &b);
      friend bool operator >= (student &a,student &b);
      friend bool operator <= (student &a,student &b);
      friend void hoanvi(student &a,student &b);
      const student &operator = (const student &a);
      ~student(){
      }
      // string getHoten();
      // double getDiemtoan(); 
      // double getDiemvan();
      // void setHoten(string hoten);
      // void setDiemtoan(double diemtoan);
      // void setDiemly(double diemly);
      // double gpa();
      //void xeploai();


};
#endif