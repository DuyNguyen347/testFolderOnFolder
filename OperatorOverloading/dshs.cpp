#include"dshs.h"
#include "student.h"
#include <iostream>
#include <iomanip>
using namespace std; 
dshs::dshs(int a):n(a){
    data = new student [n];
}
dshs::dshs(const dshs &ds):n(ds.n){
    data = new student [n];
    for(int i = 0; i<n; i++){ 
        data[i] = ds.data[i];
    }
}
istream &operator >> (istream &in ,dshs &ds){
    for(int i=0; i<ds.n; i++){
        cout<<"Nhap hoc sinh thu "<<i +1<<":"<<endl;
        cin >> ds.data[i];
    }
    return in;
}


ostream &operator << (ostream &out ,const dshs &ds){
    cout << "Ho va ten \t\tToan\tly\ttin\tDiemTB\t\tXeploai" <<endl;
    for(int i=0;i<ds.n; i++) {
       // cout<<i+1 << ".";
        cout << ds.data[i];
    }
    return out ;
}   
void sapxep(dshs &a){	
	for (int i = 0; i < a.n-1 ; i++)
		for (int j = a.n-1; j >i; j--)
		   if(a.data[j] < a.data[j-1])
		       hoanvi(a.data[j], a.data[j-1]);
}
