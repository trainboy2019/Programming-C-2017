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
    
    //Project 5
    const double percentLeft=0.75;
    const double rateOfPay=16.78;
    const double unionCut=10.0;
    const double dependentCut=35.0;
    double hours,grossPay,cutPay,dependentCost=0.0,bonusPay,bonusHours;
    int dependents;
    cout<<"Enter your hours.\n";
    cin>>hours;
    cout<<"Enter the number of dependents.\n";
    cin>>dependents;
    if(hours<40){
        bonusHours=hours-40;
        bonusPay=bonusHours*(rateOfPay*1.5);
        grossPay=(40.0*rateOfPay)+bonusPay;
    }
    else{
        grossPay=hours*rateOfPay;
    }
    cutPay=grossPay*percentLeft;
    cutPay=cutPay-unionCut;
    if(dependents>=3){
        dependentCost=dependentCut*dependents;
        cutPay=cutPay-dependentCost;
    }
    cout<<"Gross Payment: $"<<grossPay;
    cout<<"\nUnion Cost: $"<<unionCut;
    cout<<"\nTaxes: $"<<grossPay*(1.0-percentLeft);
    cout<<"\nDependent Costs: $"<<dependentCost;
    cout<<"\nMonthly Payment: $"<<cutPay;
    cout<<"\nWeekly Payment: $"<<cutPay/4.0;
    
    return 0;
}
