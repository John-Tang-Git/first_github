#pragma once
#include<iostream>
using namespace std;

class Fraction{
public:
    long long child;
    long long mom;
    //构造函数
    Fraction(int num):child(num),mom(1){} //整数到分数
    Fraction(int c,int m):child(c),mom(m){} //整数到整数
    Fraction():child(1),mom(1){}

    //运算符重载
    Fraction operator+(const Fraction& src);
    Fraction operator-(const Fraction& src);
    Fraction operator*(const Fraction& src);
    Fraction operator/(const Fraction& src);

    friend ostream& operator<<(ostream& out,const Fraction& src);
};