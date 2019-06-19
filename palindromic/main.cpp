//this problem is described on https://www.vijos.org/p/1304
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <sstream>
#include <iomanip>


using namespace std;


int main() {
    int n=0,turn=0,delta=0;
    long sum=0,num1=0,num2=0;
    bool flag;
    string m,verm;
    stringstream ioss;
    char * pEnd;

    cin>>n;
    cin>>m;
    while (turn <=30){


        turn+=1;
        sum=0;
        num1 = strtol (m.c_str(),&pEnd,n);
        reverse(m.begin(),m.end());
        num2 =strtol (m.c_str(),&pEnd,n);
        sum = num1+num2;

        m="";
        while (sum>0){
            delta = sum %n;
            if (delta==10){
                m='A'+m;
            }else if (delta==11){
                m='B'+m;
            }else if (delta==12){
                m='C'+m;
            }else if (delta==13){
                m='D'+m;
            }else if (delta==14){
                m='E'+m;
            }else if (delta==15){
                m='F'+m;
            }else{
                m=to_string(delta)+m;
            }
            sum =sum/n;
        }


        flag= true;
        for (int i=0;i<int(m.length()/2);i++){
            if (m[i]!=m[m.length()-1-i]){
                flag=false;
                break;
            }
        }
        if (flag){
            cout << "STEP=" << turn<<endl;
            return 0;
        }



    }
    cout << "Impossible!" << endl;
    return 0;
}