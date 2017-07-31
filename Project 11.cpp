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
int main()
{
    string p1,p2,v;
    cout << "P1's move";
    getline (std::cin, p1);
    cout << "P2's move";
    getline (std::cin, p2);
    if (p1=="r"&&p2=="p"){
        v="p1";
    }
    else if (p1=="p"&&p2=="s"){
        v="p1";
    }
    else if (p1=="s"&&p2=="p"){
        v="p1";
    }
    else if (p2=="r"&&p1=="p"){
        v="p2";
    }
    else if (p2=="p"&&p1=="s"){
        v="p2";
    }
    else if (p2=="s"&&p1=="p"){
        v="p2";
    }
    else{
        v="t";
    }
    cout <<v << " wins!\n";
    
    return 0;
}

