#include <iostream>
#include<stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{

 string tek,bud;
 cin>>tek>>bud;
 int sum=0;
 sum=((tek[0]-48)*10+(tek[1]-48))*3600+((tek[3]-48)*10+(tek[4]-48))*60+((tek[6]-48)*10+(tek[7]-48));
if(((bud[0]-48)*10+bud[1])<((tek[0]-48)*10+tek[1])){
   bud[0]+=2;
   bud[1]+=4;
   }
int sum1=0;
sum1=((bud[0]-48)*10+(bud[1]-48))*3600+((bud[3]-48)*10+(bud[4]-48))*60+((bud[6]-48)*10+(bud[7]-48));
int res=sum1-sum;
cout<<res;
}






