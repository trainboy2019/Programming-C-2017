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
int main() {
    
    //Project 4
    const double ton=35273.92;
    double inputOunce,outputTon;
    cout<<"Enter the weight of cereal in ounces.\n";
    cin>>inputOunce;
    outputTon=inputOunce/ton;
    cout<<"\n"<<outputTon;
    
    return 0;
}
