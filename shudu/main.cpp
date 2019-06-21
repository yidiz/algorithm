//this problems is decribed on https://www.vijos.org/p/1335
#include <iostream>
#include<set>

using namespace std;

int main() {
    int n=0,turn=0,k=0,l=0;
    int a[9][9];
    bool flag=true;
    set<int>s;
    cin>>n;
    while (turn<n){
        flag=true;
        turn+=1;
        for (int i=0;i<9;i++)
            for(int j=0;j<9;j++){
                cin>>a[i][j];
            }
        getchar();
        for(int i=0;i<9;i++){
            s.clear();
            for (int j=0;j<9;j++){
                s.insert(a[i][j]);
            }
            if (s.size()!=9){
                flag=false;
                break;
            }
        }
        if (flag==false){
            cout<<"Wrong"<<endl;
            continue;
        }

        for(int i=0;i<9;i++){
            s.clear();
            for (int j=0;j<9;j++){
                s.insert(a[j][i]);
            }
            if (s.size()!=9){
                flag=false;
                break;
            }
        }
        if (flag==false){
            cout<<"Wrong"<<endl;
            getchar();
            continue;
        }

        for(int i=0;i<9;i++){
            s.clear();
            for (int j=0;j<9;j++){
                s.insert(a[j][i]);
            }
            if (s.size()!=9){
                flag=false;
                break;
            }
        }
        if (flag==false){
            cout<<"Wrong"<<endl;
            continue;
        }

        for(int i=0;i<9;i++){
            s.clear();
            if (i==0){k=1;l=1;}
            if (i==1){k=1;l=4;}
            if (i==2){k=1;l=7;}
            if (i==3){k=4;l=1;}
            if (i==4){k=4;l=4;}
            if (i==5){k=4;l=7;}
            if (i==6){k=7;l=1;}
            if (i==7){k=7;l=4;}
            if (i==8){k=7;l=7;}


            s.insert(a[k-1][l-1]);
            s.insert(a[k-1][l]);
            s.insert(a[k-1][l+1]);
            s.insert(a[k][l-1]);
            s.insert(a[k][l]);
            s.insert(a[k][l+1]);
            s.insert(a[k+1][l-1]);
            s.insert(a[k+1][l]);
            s.insert(a[k+1][l+1]);

            if (s.size()!=9){
                flag=false;
                break;
            }
        }
        if (flag==false){
            cout<<"Wrong"<<endl;
            continue;
        }

        cout<<"Right"<<endl;


    }
    return 0;
}