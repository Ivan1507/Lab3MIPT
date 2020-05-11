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
string dye[top+1];
bool dy[top+1];
for(int i=0;i<n;i++){
cin>>A[i]>>B[i];
}
bool tek_news=news;
cin>>den;
int i=0;

while(den!=0){
        if(top==n-1) break;
if(B[i]==1&&tek_news==0){
    tek_news=0;
    top++;
    }
      else if(B[i]==0&&tek_news==0) {

tek_news=1;
B[i]=true;
}
else if(B[i]==1&&tek_news==1) {
        tek_news=1;

}
else if(B[i]==0&&tek_news==1){
        tek_news=0;
}
    den--;
    i++;
}
    for(int i=0;i<n;i++){
        cout<<A[i]<<" "<<B[i]<<endl;
    }
 }




