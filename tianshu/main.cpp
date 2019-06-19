//this problem is described on https://www.vijos.org/p/1772
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int* line = new int[10];
    int k=0;
    bool flag= true;
    for (int i=123;i<333;i++){
        k=i;flag= true;
        for (int j=0;j<10;j++){
            line[j]=0;
        }
        line[0]=1;
        while (k>0){
            if (line[k%10]==1){
                flag=false;
                break;
            }else{
                line[k%10]=1;
                k=k/10;
            }
        }
        if (!flag){
            continue;
        }
        k=i*2;
        while (k>0){
            if (line[k%10]==1){
                flag=false;
                break;
            }else{
                line[k%10]=1;
                k=k/10;
            }
        }
        if (!flag){
            continue;
        }
        k=i*3;
        while (k>0){
            if (line[k%10]==1){
                flag=false;
                break;
            }else{
                line[k%10]=1;
                k=k/10;
            }
        }
        if (!flag){
            continue;
        }
        cout << i <<" "<<i*2<<" "<<i*3<< endl;
    }

    return 0;
}