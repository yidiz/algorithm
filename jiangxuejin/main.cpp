//this prolmen is described on https://www.vijos.org/p/1001
#include <iostream>
using namespace std;
int main() {
    string str;
    string max_name,name;
    int max_income, income,totalincome,line;
    string banjiganbu, xibuxuesheng;
    totalincome=0;
    max_income=0;
    int finalscore, classscore,thesisnum;
    cin>>line;
    for(int i=0;i<line;i++){
        cin>>name>>finalscore>>classscore>>banjiganbu>>xibuxuesheng>>thesisnum;
        income =0;
        if ((finalscore>80) and (thesisnum>=1)){
            income+=8000;
        }
        if ((finalscore>85)and(classscore>80)){
            income+=4000;
        }
        if (finalscore>90){
            income+=2000;
        }
        if((finalscore>85) and (xibuxuesheng==("Y"))){
            income+=1000;
        }
        if ((classscore>80)and (banjiganbu==("Y"))){
            income+=850;
        }
        if (income>max_income){
            max_name = name;
            max_income=income;
        }
        totalincome +=income;
    }
    cout << max_name<< endl;
    cout<<max_income<< endl;
    cout<<totalincome<< endl;
    return 0;
}