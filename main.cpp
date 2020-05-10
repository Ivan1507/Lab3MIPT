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
 int K[k];
 int max=0;
 for(int i=0;i<n;i++){
    cin>>A[i];
    max=A[1]-A[0];
 }
 K[0]=A[0];
 K[k-1]=A[n-1];
 int count=0;
 int min_rast=1;
for(int i=0;i<n-1;i++){
     if(A[i]+A[0]>max){
        K[count+1]=A[i];
     }
}
int max2=K[1]-K[0];
for(int i=0;i<k-1;i++){
    if(K[i+1]-K[i]>max2) max2=K[i+1]-K[i];
}
 cout<<K[n-1];
}






