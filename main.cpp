#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{

 int n;
 bool news;
cin>>n>>news;
vector<string> A;
int den;
vector<bool> B;
int top=0;
for(int i=0;i<n;i++){
cin>>A[i]>>B[i];
}
bool tek_news=news;
cin>>den;
int i=0;

while(den!=0){
        if(top==n-1) break;
if(B[i]==1&&tek_news==0){
            dye[top]=i;
            top++;
    tek_news=0;
    }
      else if(B[i]==0&&tek_news==0) {
tek_news=1;
B[i]=true;
}
else if(B[i]==1&&tek_news==1) tek_news=1;
else if(B[i]==0&&tek_news==1) tek_news=0;
    den--;
    i++;
}
 for(int i=0;i<n;i++){
     if(i+1!=dye[i])
    cout<<A[i]<<" "<<B[i]<<endl;

    }
 }






