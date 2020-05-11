 #include <iostream>
#include <string>
using namespace std;
int main()
{

 int n;
 bool news;
cin>>n>>news;
string A[n];
int den;
bool B[n];
int top=0;
string dye[n];
bool dy[n];
for(int i=0;i<n;i++){
cin>>A[i]>>B[i];
}
bool tek_news=news;
cin>>den;
int i=0;
int dying=0;
while(den!=0){
if(top==n-1) break;
if(B[i]==1&&tek_news==0){
    tek_news=0;
    dying++;
    }
      else if(B[i]==0&&tek_news==0) {
tek_news=1;
B[i]=true;
dye[top]=A[i];
dy[top]=B[i];
top++;
}
else if(B[i]==1&&tek_news==1) {
        tek_news=1;
        dye[top]=A[i];
dy[top]=B[i];
top++;
}
else if(B[i]==0&&tek_news==1){
        tek_news=0;
        dye[top]=A[i];
dy[top]=B[i];
top++;
}
    den--;
    i++;
}
for(int i=0;i<top;i++){
    cout<<dye[i]<<" "<<dy[i]<<endl;
}
    for(int i=top+dying;i<n;i++){
        cout<<A[i]<<" "<<B[i]<<endl;
    }
 }




