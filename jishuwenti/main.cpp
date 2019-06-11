// this problem is described in https://www.vijos.org/p/1848
// maybe it is easy to solve it with enumeration algorithm
#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int x, n;
    int turn=1;
    int i;
    int re =0;
    cin >> x >> n;
    while (x>=int(pow(10,turn-1))){
        i = x % int(pow(10,turn))-n*int(pow(10,turn-1))+1;
        if (i<0){
            i=0;
        }else if(i>int(pow(10,turn-1))){
            i=int(pow(10,turn-1));
        }
        if (n==0){
            re = re+int(pow(10,turn-1))*(x/(int(pow(10,turn)))-1)+i;
        }else
            re = re+int(pow(10,turn-1))*(x/(int(pow(10,turn))))+i;
        turn = turn+1;
    }
    cout << re << endl;
    return 0;
}