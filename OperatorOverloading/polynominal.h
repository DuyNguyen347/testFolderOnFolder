#include <iostream>
using namespace std;
#ifndef POLYNOMINAL_H
#define POLYNOMINAL_H
class polynominal{
    private :
    int n;
    int *f;
    public:
    polynominal(int bac = 3);
    polynominal(int *t,int n);
    polynominal(const polynominal &a);
    ~polynominal(){};
    polynominal operator + (polynominal &a);
    polynominal operator - (polynominal &a);
    friend istream &operator >> (istream &in,polynominal &a);
    friend ostream &operator << (ostream &out,polynominal &a);
    polynominal operator = (const polynominal &a);
    int &operator [] (int i) const ;
    int operator () (int x );

};
polynominal :: polynominal (int bac):n(bac){
    f = new int [n];
    for(int i=0;i<this->n;i++){
        f[i] =0;
    }
} 
polynominal :: polynominal (int *t,int n):n(n){
    f = new int [n];
    for(int i=0;i<this->n;i++){
        f[i] = t[i];
    }
}
polynominal :: polynominal (const polynominal &a){
    this -> n = a.n;
    for(int i=0;i<this->n;i++){
        f[i] = a.f[i];
    }
}
istream &operator >> (istream &in,polynominal &a){
    for(int i=0;i<a.n;i++){
        cout << "Nhap he so thu " << i << ": ";
        in >> a.f[i];
    }
    return in;
}
ostream &operator << (ostream &out,polynominal &a){
    for(int i=0;i<a.n;i++){
        cout << "He so thu " << i << ": " << a.f[i] <<endl;
    }
    return out ; 
}
polynominal polynominal :: operator+ (polynominal &a){
    polynominal t;
    if(n > a.n) t.n = n;
    else t.n = a.n;
    for(int i=0;i<t.n;i++){
        t.f[i] = f[i] + a.f[i];
    }
    return t;
}
polynominal polynominal :: operator- (polynominal &a){
    polynominal t;
    if(n > a.n) t.n = n;
    else t.n = a.n;
    for(int i=0;i<t.n;i++){
        t.f[i] = f[i] - a.f[i];
    }
    return t;
}
polynominal polynominal :: operator= (const polynominal &a){
    //if(n >0) delete[] f;
    this -> n = a.n;
    for(int i=0;i<n;i++){
        f[i] = a.f[i];
    }
}
int& polynominal ::  operator [] (int i) const {
    return f[i];
}
int polynominal :: operator () (int x){
    int kq =0;
    int xMuI = 1;
    for(int i=0;i<this->n;i++){
        kq += f[i]*xMuI;
        xMuI *= x;
    }
    return kq;
}
#endif