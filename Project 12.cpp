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

//Switched to compiling with XCode, NetBeans quit working for me.

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
bool palCheck(){
    string name;
    bool pal=true;
    bool term=false;
    cout << "Enter a word\n";
    getline (cin, name);
    int i=0;
    int j;
    j=name.size();
    j--;
    if (name[j]=='.'){
        term=true;
        j--;
    }
    do{
        if(name[i]==name[j]){
            i++;
            j--;
        }
        else{
            pal=false;
            i++;
            j--;
        }
    }while (i<j);
    
    if(pal){
        cout<<"Yes\n";
    }
    else{
        cout<<"no\n";
    }
    return term;
}

int main()
{
    bool term=false;
    do{
        term=palCheck();
    }while(term==false);
    return 0;
}
