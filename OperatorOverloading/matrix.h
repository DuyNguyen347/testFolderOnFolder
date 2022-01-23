#include<iostream>
using namespace std;
#ifndef MATRIX_H
#define MATRIX_H
class matran{
    private :
    int n;
    int **v;
    public:
    matran(int size = 0);
    matran(const matran &a );
    matran (const int *a, int n);
    friend istream &operator >> (istream &in, matran &a);
    friend ostream &operator << (ostream &out, matran &a);
    const matran& operator = (const matran &a); 
    friend matran operator +(matran &a,matran &b);
    friend matran operator -(matran &a,matran &b);
    friend matran operator *(matran &a,matran &b);
    int operator ()(const matran &a);

    ~matran(){
        for(int i=0;i<n;i++){
            delete [] v[i];
        }
        delete [] v;
    };
    
};
matran :: matran(int size):n(size){
    v = new int* [n];
    for(int i=0;i<n;i++) v[i] = new int [n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v[i][j]=0;
        }
    }
}
matran :: matran(const matran &a){
    this -> n = a.n;
    v = new int* [n];
    for(int i=0;i<n;i++) v[i] = new int [n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            this -> v[i][j] = a.v[i][j];
        }
    }
}
matran :: matran (const int *a, int n):n(n){
        v= new int* [n];
        for(int i=0;i<n;i++) v[i] = new int [n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                this -> v[i][j] = (a[i]+j) ;
            }
        }
    }
istream &operator >> (istream &in,matran &a){
    // cout << "Nhap n: ";
    // in >> a.n;
    a.v = new int* [a.n];
    for(int i=0;i<a.n;i++) a.v[i] = new int [a.n];
    for(int i=0;i<a.n;i++){
        for(int j=0;j<a.n;j++){
            cout << "Nhap v[" << i << "][" << j << "] " ;
            in>> a.v[i][j];
        }
    }
    return in;
}
ostream &operator << (ostream &out,matran &a){
    for(int i=0;i<a.n;i++){
        for(int j=0;j<a.n;j++){
            out << "v[" << i << "]" << "[" << j << "] = " << a.v[i][j] << endl; 
        }
    }
}
const matran& matran ::  operator = (const matran &a){
    if(n>0){
        for(int i=0;i<this ->n;i++) delete[] v[i];
    }
    delete[] v;
    this -> n = a.n;
    v = new int* [n];
    for(int i=0;i<n;i++) v[i] = new int [n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            this -> v[i][j] = a.v[i][j];
        }
    }
}
matran operator + (matran &a,matran &b){
    if(a.n == b.n){
        matran c(a.n);
        for(int i=0;i<a.n;i++){
            for(int j=0;j<a.n;j++){
                c.v[i][j] = a.v[i][j] + b.v[i][j];
            }
        }
        return c;
    }
    cout << "Hai ma tran khong cung cap " <<endl;
}
matran operator - (matran &a,matran &b){
    if(a.n == b.n){
        matran c(a.n);
        for(int i=0;i<a.n;i++){
            for(int j=0;j<a.n;j++){
                c.v[i][j] = a.v[i][j] - b.v[i][j];
            }
        }
        return c;
    }
    else cout << "Hai ma tran khong cung cap: ";
}
matran operator * (matran &a,matran &b){
    if(a.n == b.n){
        matran c(a.n);
        for(int i=0;i<a.n;i++){
            for(int j=0;j<a.n;j++){
                c.v[i][j] =0;
                for(int z = 0;z<a.n;z++){
                    c.v[i][j] += a.v[i][z] * b.v[z][j];
                }
            }
        }
        return c;
    }
    else cout << "Hai ma tran khong cung cap: ";
}
#endif