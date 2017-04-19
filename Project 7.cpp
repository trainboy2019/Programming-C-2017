/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: Ike1
 *
 * Created on January 5, 2017, 12:59 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

//Project 7
double formula(double m1,double m2,double d){
    double f,m,mg,dd;
    const double g=(6.673*(10^-8));
    dd=d*d;
    m=m*m;
    mg=m*g;
    f=mg/dd;
    return f;
}

int main() {
    
    //Project 7
    double m1,m2,d,f;
    cout<<"Enter Mass 1: ";
    cin>>m1;
    cout<<"Enter Mass 2: ";
    cin>>m2;
    cout<<"Enter Distance: ";
    cin>>d;
    f=formula(m1,m2,d);
    cout<<f;

    return 0;
    
}
