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
 int max=0;
 for(int i=0;i<n;i++){
    cin>>A[i];
    max=A[1]-A[0];
 }
 int count=0;
for(int i=0;i<n-1;i++){
    if(A[i+1]+A[i]>max){
        count+=1;
        max=A[i+1]-A[0];
        continue;
    }
}
 cout<<max;
}






