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

using namespace std;

class Grader {
    double grade[6];
    char letter;
public:
    void judge (double,double,double,double,double);
};

void Grader::judge (double qi, double qii, double mid, double final, double point) {
    double total=0;
    int a=0;
    //Assume max points for each is 100 with 125 core points
    //(((qi/100)/8)+((qii/100)/8)+((mid/100)/4)+((final/100)/2)+((point/125)/4))*100
    grade[0]=(qi/100.0)/8.0;
    grade[1]=(qii/100.0)/8.0;
    grade[2]=(mid/100.0)/4.0;
    grade[3]=(final/100.0)/2.0;
    grade[4]=(point/125.0)/4.0;
    
    while (a<5)
    {
        grade[5]+=grade[a];
        a++;
    }
    grade[5]=grade[5]*100;
    if (grade[5]>=112.5){
        letter='A';
    }
    else
        if (grade[5]>=100.0){
            letter='B';
        }
        else
            if (grade[5]>=87.5){
                letter='C';
            }
            else
                if (grade[5]>=75.0){
                    letter='D';
                }
                else{
                    letter='F';
                }
    a=0;
    while (a<6)
    {
        cout<<grade[a]<<'\n';
        a++;
    }
    cout<<letter;
    
}

int main(int argc, char** argv) {
    
    Grader record;
    record.judge(95,100,107,85,96.75);
    
    return 0;
}

