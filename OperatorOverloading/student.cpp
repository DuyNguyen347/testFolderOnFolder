#include"student.h"
int student:: count =0;
student :: student(string ht,double t,double l,double ti):hoten(ht),diemtoan(t),diemly(l),diemtin(ti){
    count++;
      }
student :: student(const student &p){
          this -> hoten = p.hoten;
          this -> diemtoan = p.diemtoan;
          this -> diemly = p.diemly;
          this -> diemtin =p.diemtin;
          this -> dtb = p.dtb;
          this -> xeploai = p.xeploai;
          count ++;
      }
const student& student :: operator = (const student &a){
    if(this != &a){
        this -> hoten = a.hoten;
        this -> diemtoan = a.diemtoan;
        this -> diemly = a.diemly;
        this -> diemtin =  a.diemtin;
        this -> dtb = a.dtb;
        this -> xeploai = a.xeploai;
    }
    return *this;
}

istream &operator >> (istream &in, student &p) {
          fflush(stdin);
          cout << "Nhap ho ten: " ;
          getline(in , p.hoten);
          cout << "Nhap diem toan: ";
          in >> p.diemtoan;
          cout << "Nhap diem van: " ;
          in >> p.diemly;
          cout << "Nhap diem tin: ";
          in >> p.diemtin;
          p.dtb = (p.diemtoan +p.diemly+ p.diemtin)/3;
          p.xeploai = (p.dtb<5)?"Yeu":(p.dtb<6.5)?"Trung binh":(p.dtb<8)?"Kha":"Gioi";
          return in;
      }
ostream &operator << (ostream &out ,const student &p)  {
          out<<p.hoten<< "\t\t"<<p.diemtoan<<"\t"<<p.diemly<<"\t"<<p.diemtin<<"\t"<<p.dtb<<"\t\t"<<p.xeploai<<endl;
          return out;
}
bool operator > (student &a,student &b){
    if(a.dtb > b.dtb) return true;
    else return false;
}
bool operator < (student &a,student &b){
    if(a.dtb < b.dtb) return true;
    else return false;
}
bool operator >= (student &a,student &b){
    if(a.dtb  >= b.dtb) return true;
    else return false;
}
bool operator <= (student &a,student &b){
    if(a.dtb <= b.dtb) return true;
    else return false;
}
bool operator == (student &a,student &b){
    if(a.dtb == b.dtb) return true;
    else return false;
}
void hoanvi(student &a,student &b){
    student t = a;
    a = b;
    b = t;
}
// string student ::getHoten(){ 
//           return hoten;
//       }
// double student ::getDiemtoan(){
//           return diemtoan;
//       }
// double student ::getDiemvan(){
//           return diemly;
//       }
// void student ::setHoten(string hoten){
//           this -> hoten = hoten; 
//       }
// void student ::setDiemtoan(double diemtoan){
//           if(diemtoan >=0 && diemtoan <=10) {
//               this -> diemtoan = diemtoan;
//           }
//           else {
//               cout << "Gia tri khong dung" <<endl;
//           }
//       }
// void student ::setDiemly(double diemly){
//           if(diemly >=0 && diemly <=10) {
//               this -> diemly = diemly;
//           }
//           else {
//               cout << "Gia tri khong dung";
//           }
//       }
// double student ::gpa(){
//            return (diemtoan + diemly)/2;
//       }
// void student ::xeploai(){
//           if(gpa()>= 8) cout << "Xep loai: Gioi";
//           else if(gpa()>=7 && gpa() <8) cout << "Xep loai: Kha";
//           else if(gpa()>= 5 && gpa() <7) cout << "Xep loai: Trung binh";
//           else if(gpa()<5) cout << "Xep loai: Yeu";
//       }
