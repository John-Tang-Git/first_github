#include<iostream>
#include<cmath>
#include"Fraction.h"
using namespace std;
int gcd(int a, int b){ //最大公约数
    return b ? gcd(b, a % b) : a;
}

Fraction Fraction::operator+(const Fraction& src){
    Fraction tmp;
    tmp.child=child*src.mom+src.child*mom;
    tmp.mom=mom*src.mom;
    int x=gcd(abs(tmp.mom),abs(tmp.child));
    tmp.mom/=x; tmp.child/=x;
    return tmp;
}
Fraction Fraction::operator-(const Fraction& src){
    Fraction tmp;
    tmp.child=child*src.mom-src.child*mom;
    tmp.mom=mom*src.mom;
    int x=gcd(abs(tmp.mom),abs(tmp.child));
    tmp.mom/=x; tmp.child/=x;
    return tmp;
}
Fraction Fraction::operator*(const Fraction& src){
    Fraction tmp;
    tmp.child=child*src.child;
    tmp.mom=mom*src.mom;
    int x=gcd(abs(tmp.mom),abs(tmp.child));
    tmp.mom/=x; tmp.child/=x;
    return tmp;
}
Fraction Fraction::operator/(const Fraction& src){
    Fraction tmp;
    tmp.child=child*src.mom;
    tmp.mom=mom*src.child;
    int x=gcd(abs(tmp.mom),abs(tmp.child));
    tmp.mom/=x; tmp.child/=x;
    return tmp;
}


ostream& operator<<(ostream& out,const Fraction& src){
    if(src.child==0) out<<0;
    else if(src.child%src.mom==0) out<<src.child/src.mom;
    else if(src.child>0&&src.mom>0 || src.child<0&&src.mom<0){
        int x=gcd(abs(src.mom),abs(src.child));
        out<<abs(src.child/x)<<'/'<<abs(src.mom/x);
    }
    else if(src.child>0&&src.mom<0 || src.child<0&&src.mom>0){
        int x=gcd(abs(src.mom),abs(src.child));
        out<<'-'<<abs(src.child/x)<<'/'<<abs(src.mom/x);
    }
    return out;
}