#include <iostream>
 #include <math.h>
using namespace std;

int main()
{
 int n;
 cin>>n;
 int k;
 int e;
 int c=60;
 bool f=false;
 int i=100;
 int year=0;
 while(i!=0){
 year=n/pow(c,i);
 if(year>=1){
        f=true;
        n=n-year*pow(c,i);
        k=year/10;
        while(k!=0){
        cout<<"<";
        k--;
    }
    e=year%10;
    while(e!=0){
        cout<<"v";
        e--;
    }
    cout<<".";

 }
 else if(f==1) cout<<".";
 i--;
 }
    k=n/10;
    e=n%10;
 while(k!=0){
    cout<<"<";
    k--;
 }
 while(e!=0){
    cout<<"v";
    e--;
 }

}

