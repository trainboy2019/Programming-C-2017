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

//Project 6
double literToGallon(double liter, double miles){
    double gallon;
    gallon=liter*0.264179;
    return miles/gallon;
}

int main() {
    
//Project 6
    double liter,mpg,miles;
    cout<<"Enter the number of liters\n";
    cin>>liter;
    cout<<"Enter the number of miles\n";
    cin>>miles;
    mpg=literToGallon(liter,miles);
    cout<<mpg;

    return 0;
    
}
