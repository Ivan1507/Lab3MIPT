#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=n;
    int A[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }

for(int i=n-1;i>0;i--){
        int t=A[i][n-1];
        A[i][n-1]=A[i-1][n-1];
        A[i-1][n-1]=t;
    }
for(int i=n-1;i>0;i--){
    int t=A[0][i];
    A[0][i]=A[0][i-1];
    A[0][i-1]=t;
}
for(int i=0;i<n-1;i++){
    int t=A[i][0];
    A[i][0]=A[i+1][0];
    A[i+1][0]=t;
}



    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
    cout<<endl;
    }

}
