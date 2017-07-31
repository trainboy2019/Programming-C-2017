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
    string array;
    int a,b,c,d,e,f,g,h,i,j,k=0;
    cout << "Enter numbers ";
    getline (cin, array);
    array.append(".");
    for(i=0; i < sizeof(array); i++ )
    {
        if(array[k]=='0'){
            a++;
        }
        else if(array[k]=='1'){
            b++;
        }
        else if(array[k]=='2'){
            c++;
        }
        else if(array[k]=='3'){
            d++;
        }
        else if(array[k]=='4'){
            e++;
        }
        else if(array[k]=='5'){
            f++;
        }
        else if(array[k]=='6'){
            g++;
        }
        else if(array[k]=='7'){
            h++;
        }
        else if(array[k]=='8'){
            i++;
        }
        else if(array[k]=='9'){
            j++;
        }
        else{
        }
        k++;
    }
    cout<<"0: "<<a<<'\n'<<"1: "<<b<<'\n'<<"2: "<<c<<'\n'<<"3: "<<d<<'\n'<<"4: "<<e<<'\n'<<"5: "<<f<<'\n'<<"6: "<<g<<'\n'<<"7: "<<h<<'\n'<<"8: "<<i<<'\n'<<"9: "<<j;
    return 0;
}

