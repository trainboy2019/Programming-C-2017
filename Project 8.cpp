#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
//Project 8
int judgeAge(int age, int maxAge){
    if (age<maxAge){
        return 0;
    }
    else{
        return 1;
    }
}

double hatFunc(double weight,double height,double&hat){
    hat=(weight/height)*2.9;
    return hat;
}

double jacketFunc(double height, double weight, int age, double&jacket){
    jacket=(height*weight)/288.0;
    if (age>=30){
        age=((age-30)/10)%10;
        jacket=jacket+(age*0.125);
    }
    return jacket;
}

double waistFunc(double height, double weight, int age, double&waist){
    waist=weight/5.7;
    if (age<=28){
        age=(age-28)/2;
        waist=waist+(age*0.1);
    }
    return waist;
}

int main() {
    //Project 8
    double height,weight,hat=0,jacket=0,waist=0;
    int age;
    cout<<"Height in inches?\n";
    cin>>height;
    cout<<"Weight in pounds?\n";
    cin>>weight;
    cout<<"Age?\n";
    cin>>age;
    hat=hatFunc(weight,height,hat);
    jacket=jacketFunc(height,weight,age,jacket);
    waist=waistFunc(height,weight,age,waist);
    cout<<"Hat: "<<hat<<"\nJacket: ";
    cout<<jacket<<"\nWaist: ";
    cout<<waist<<"\n";
    
    return 0;
    
}