#pragma once
#include<iostream>
using namespace std;

template<class T>
T calculate(char type,T x,T y,T z){
    T ans;
    if(type=='A'){
        ans=x*x+y*y+z*z;
    }else if(type=='B'){
        ans=x*y+y/z-x*z;
    }else if(type=='C'){
        ans=y*3*z-x*z/(y-2)-x*y/(z+1);
    }
    return ans;
}