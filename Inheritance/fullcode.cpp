#include<iostream>
using namespace std;
class nguoi{
    private:
    string hoten;
    public:
    nguoi();
    ~nguoi();
    void input();
    void output();
};
class sinhvien : public nguoi{
    private:
    string lop;
    float dtb;
    public :
    sinhvien();
    ~sinhvien();
    void input();
    void output();
    int getDTB();
};
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
class quanli{
    private:
    sinhvien *sv;
    int nSV;
    giangvien  *gv;
    int nGV;
    public:
    quanli();
    ~quanli(){
        delete [] sv;
        delete [] gv;
    };
    void addSV();
    void addGV();
    void input();
    void output();
    void xuatDanhSachKhenThuong();
};    
int main(){
    quanli *x = new quanli;
    int lc;
    do{
    system("cls");
    cout << "\t\t\t---MENU---\t\t\t" <<endl;
    cout<< "1.Nhap danh sach:" <<endl;
    cout << "2.Xuat danh sach: " <<endl;
    cout << "3.Xuat danh sach khen thuong: " <<endl;
    cout << "4.Thoat." <<endl;
    cout << "Nhap luc chon: " ;
    cin >> lc ;
    switch(lc){
        case 1: 
        x-> input();
        break;
        case 2: 
        x-> output();
        break;
        case 3:
        x-> xuatDanhSachKhenThuong();
        break;
        default:
        break;
    }
    system("pause");
    } while (lc>0 && lc <4);
    // x-> input();
    // x-> output();
    // x-> xuatDanhSachKhenThuong();
    delete x;
    return 0;
} 
nguoi :: nguoi(){
    hoten = " ";
} 
nguoi :: ~nguoi(){
}
void nguoi :: input(){
        fflush(stdin);
        cout << "Nhap ho ten: ";
        getline(cin,hoten);
}
void nguoi :: output(){
    cout << "Ho va ten: " << hoten;
}
sinhvien :: sinhvien(){
    lop = " ";
    dtb = 0;
}
sinhvien :: ~sinhvien(){

}
void sinhvien :: input(){
    nguoi:: input();
    cout << "Nhap lop";
    fflush(stdin);
    cin >> lop;
    cout << "Nhap diem trung binh: ";
    cin >> dtb;
}
void sinhvien :: output(){
    nguoi :: output();
    cout << "\nLop: " << lop<< endl;
    cout << "Diem trung binh: " << dtb<<endl;
}
int sinhvien :: getDTB(){
    return dtb;
}
giangvien :: giangvien(){
    mon = " ";
    sobaibao = 0;
}
giangvien :: ~giangvien(){

}
void giangvien:: input(){
    nguoi :: input();
    cout << "Nhap bo mon: " ;
    fflush(stdin);
    getline(cin,mon);
    cout << "Nhap so bai bao";
    cin >> sobaibao;
}
void giangvien:: output(){
    nguoi :: output();
    cout << "\nBo mon: " << mon <<endl;
    cout << "So bai bao khoa hoc" << sobaibao <<endl; 
}
int giangvien :: getSBB(){
    return sobaibao;
}
quanli :: quanli(){
    nSV =0;
    nGV =0;
    sv = new sinhvien [nSV];
    gv = new giangvien [nGV];
}
void quanli :: addSV(){
    sinhvien *newSV;
    int newNsv = nSV +1;
    newSV = new sinhvien[newNsv];
    for(int i=0;i<nSV;i++){
        newSV[i] = sv[i];
    }
    delete [] sv;
    cout << "Nhap thong tin sinh vien: " << endl;
    newSV[newNsv-1].input();
    sv = newSV;
    nSV = newNsv;

}
void quanli :: addGV(){
    giangvien *newGV;
    int newNgv = nGV +1;
    newGV = new giangvien[newNgv];
    for(int i=0;i<nGV;i++){
        newGV[i] = gv[i];
    }
    delete [] gv;
    cout << "Nhap thong tin giang vien:" <<endl;
    newGV[newNgv-1].input();
    gv = newGV;
    nGV = newNgv;
}



void quanli:: input(){
    int lc;
    while (true){
        system("cls");
        cout << "\t\t\t----QuanLi----\t\t\t"<<endl;
        cout << "1.Nhap danh sach sinh vien:" <<endl;
        cout << "2.Nhap danh sach giang vien" <<endl;
        cout << "3.Thoat" <<endl;
        cout << "Nhap lua chon:";
        cin >> lc;
        if(lc ==1){
            addSV();
        }
        else if(lc == 2){
            addGV();
        }
        else if(lc == 3 ) break;
        else {
            cout << "Vui long nhap lai";
            system("pause");
        }
    }
}
void quanli :: output(){
    cout<< "\t\t\t---DANH SACH SINH VIEN---\t\t\t"<<endl;
    for(int i=0;i< nSV;i++){
        cout<< "Thong tin sinh vien thu " << i+1<<endl;
        sv[i].output();
    }
    cout<< "\t\t\t---DANH SACH GIANG VIEN---\t\t\t"<<endl;
    for(int i=0;i< nGV;i++){
        cout<< "Thong tin giang vien thu " << i+1<<endl;
        gv[i].output();
    }
}
void quanli :: xuatDanhSachKhenThuong(){
    cout << "\t\t\t---DANH SACH SINH VIEN DUOC KHEN THUONG---\t\t\t" <<endl;
    for(int i=0;i<nSV;i++){
        if(sv[i].getDTB() >= 8) {
            sv[i].output();
        }
    }
    cout << "\t\t\t---DANH SACH GIANG VIEN DUOC KHEN THUONG---\t\t\t" <<endl;
    for(int i=0;i<nGV;i++){
        if(gv[i].getSBB() >= 3 ){
            gv[i].output();
        }
    }
}