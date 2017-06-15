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
    
    cout<<"Think of a number between 1 and 100\n";
    int guess=50;
    int highCap=100;
    int lowCap=0;
    char judge,dir;
    while (judge!='y'){
        cout<<"Is your number "<<guess<<"?\n";
        cin>>judge;
        if (judge !='y'){
            cout<<"Am I high(h) or low(l)?\n";
            cin>>dir;
            if (dir=='h'){
                highCap=guess;
                guess=guess-((highCap-lowCap)/2);
            }
            else if (dir=='l'){
                lowCap=guess;
                guess=guess+((highCap-lowCap)/2);
                
            }
        }
    }
    cout<<"done";
    
    return 0;
}
