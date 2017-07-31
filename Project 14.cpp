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
#include <string>
#include <vector>

using namespace std;
int main()
{
    char love [4] ={'L','o','v','e'};
    string array,mod;
    vector<char> word;
    int j=0;
    int size,replace=0;
    vector<int> letterLoc;
    cout << "Enter text ";
    getline (cin, array);

    array.append(" ");
    mod=array;
    for(int i=0; i < sizeof(array); i++ )
    {
        if(array[i]!=' '){
            word.push_back(array[i]);
            size++;
            letterLoc.push_back(i);
        }
        else{
            if(size==4){
                for(j=0; j<4; j++){
                    replace=letterLoc[j];
                    mod[replace]=love[j];
                }
            }
            size=0;
            word.clear();
            letterLoc.clear();
        }
    }
    cout<<'\n'<<mod;
    
    return 0;
}

