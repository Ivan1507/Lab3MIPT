#include <iostream>
#include<stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
 int n,k;
 cin>>n>>k;
 int A[n];
 for(int i=0;i<n;i++){
    cin>>A[i];
 }
 int l=0;
 if(k>2){
    l=max(A[n/k]-A[0],A[n-1]-A[n/k]);
 }
 else l=A[n-1]-A[0];
 cout<<l;
}






