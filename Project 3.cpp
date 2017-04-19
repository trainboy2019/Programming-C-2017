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
    
    //Project 3
    //Plan
    //OldPayAnnual/12=OldPayMonth, OldPayMonth*1.076=NewPayMonth, (NewPayMonth*6)-(oldPaymonth*6)=AmountDue, NewPayMonth*12=NewPayYear
    const double payIncrease=1.076;
    double oldPayYear,oldPayMonth,newPayYear,amountDue,newPayMonth;
    cout<<"Enter Old Annual Salary\n";
    cin>>oldPayYear;
    newPayYear=oldPayYear*payIncrease;
    oldPayMonth=oldPayYear/12.0;
    newPayMonth=newPayYear/12.0;
    amountDue=(newPayMonth*6.0)-(oldPayMonth*6.0);
    cout<<"Amount Due: "<<amountDue;
    cout<<"\nNew Monthly Salary: "<<newPayMonth;
    cout<<"\nNew Annual Salary: "<<newPayYear;
    
    return 0;
}
