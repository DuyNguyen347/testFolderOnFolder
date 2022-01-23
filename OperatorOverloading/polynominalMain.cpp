#include <iostream>
using namespace std;
#include"polynominal.h"
int main(){
    polynominal p(4);
    cin >> p;
    cout << p;
    cout << "\nGIa tri cua p tai x =2 " << p(2);
    polynominal q(3);
    cin >> q;
    cout << q;
    polynominal t    ;
    t = q + p;
    cout << "Tong 2 da thuc: " <<endl;
    cout << t;
    cout << "He so thu 2 trong t " ;
    cout << t[2];
    cout << "\n Gia tri da thuc tai x =2 la " << t(2);
    return 0;
}