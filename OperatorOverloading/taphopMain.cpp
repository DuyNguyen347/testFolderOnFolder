#include<iostream>
using namespace std;
class taphop{   
    private :
    int n;
    int *q;
    public:
    taphop();
    taphop(int *a,int n);
    taphop(const taphop &a);
    ~taphop(){
    };
    friend ostream &operator << (ostream &out,const taphop &a);
    friend taphop operator + (taphop &a,taphop &b);
    friend taphop operator - (taphop &a,taphop &b);
    friend taphop operator * (taphop &a,taphop &b);
    friend void operator + (taphop &a,const int &x);
    friend void operator - (taphop &a,const int &x);
    const taphop &operator = (const taphop &a);
    int operator [] (const int &i);
    int operator () (const int &x);


};
taphop :: taphop ():n(0){
}
taphop :: taphop (int *t,int n):n(n){
     q= new int [n];
     for(int i=0;i<n;i++){
         q[i] = t[i];
     }
}
taphop :: taphop (const taphop &a){
    this -> n = a.n;
    for(int i=0;i<this->n;i++){
        q[i] = a.q[i];
    }
}
ostream &operator << (ostream &out,const taphop &a){
    if(a.n == 0) out << "Tap hop rong.";
    for(int i=0;i<a.n;i++){
        out << "q[" << i << "]= " << a.q[i] <<endl;
    }
    return out;
}
void  operator + (taphop &a,const int &x){
    int newN = a.n +1;
    int *newQ = new int [newN];
    for(int i=0;i<a.n;i++){
        newQ[i] = a.q[i];
    }
    newQ[newN - 1]  = x;
    a.n = newN;
    a.q = newQ;
}
void operator - (taphop &a,const int &x){
    if(a(x) == -1) cout << "Khong ton tai gia tri x trong tap hop";
    else for(int i = a(x);i<a.n-1;i++){
        a.q[i] = a.q[i+1];
    }
        a.n--;
}
int taphop :: operator () (const int &x){
    for(int i=0;i<n;i++){
        if(q[i] == x){
            return i;
        }
    }
    return -1;
}
int taphop:: operator [] (const int &i){
    return q[i];
}
taphop operator + (taphop &a,taphop &b){
    taphop kq;
    kq.n = a.n + b.n;
    kq.q = new int [kq.n];
    int count =0;
    for(int i=0;i<a.n;i++){
        kq.q[count] = a.q[i];
        count++;
    }
    for(int i=0;i<b.n;i++){
        if(a(b[i]) == -1){
            kq.q[count] = b.q[i];
            count++;
        }
    }
    return kq;
}
taphop operator - (taphop &a,taphop &b){
    taphop kq;
    kq.n = a.n;
    kq.q = new int [kq.n];
    int count =0;
    for(int i=0;i<a.n;i++){
        if(a(b[i]) == -1){
            kq.q[i] = a.q[i];
            count ++;
        }
    }
    return kq;
}
taphop operator * (taphop &a,taphop &b){
    taphop kq;
    kq.n = a.n;
    kq.q = new int [kq.n];
    int count =0;
    for(int i=0;i<a.n;i++){
        if(a(b[i]) != -1){
            kq.q[i] = a.q[i];
            count ++;
        }
    }
    return kq;
}
int main(){
    taphop p;
    // cout << "Tap hop p{" << p << "}"<<endl;
    p + 2;
    p + 3;
    p + 11;
    p + 99;
    p + 123;
    cout << "Tap hop sau khi them phan tu " << p <<endl;
    p - 3;
    cout << p;
    taphop r;
    r + 4 ;
    r + 2;
    r + 69;
    cout << "Tap hop r : " << endl;
    cout << r;
    taphop h = p + r;
    cout << "Hop cua q va r la " <<endl;
    cout << h;
    taphop l = p -r;
    cout << "Hieu cua q va r la " <<endl;
    cout << l;
    taphop d = p *r;
    cout << "Giao cua q va r la " <<endl;
    cout << d;


    return 0;
}