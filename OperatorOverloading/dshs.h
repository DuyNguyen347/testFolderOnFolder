#ifndef DSHS_H
#define DSHS_H
#include"student.h"
class dshs{
    private:
    const int n;
    student *data;
    public:
    dshs(int a); 
    dshs(const dshs &ds);
    ~dshs() {
            delete [] data;
        }
    friend istream &operator >> (istream &in,dshs &ds);
    friend ostream &operator << (ostream &out,const dshs &ds);
    friend void sapxep(dshs &a);
};
#endif