#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=0;
    int A[n][n];
    int B[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    int v=1;
    while(k!=n){
 for(int i=0;i<n;i++){
    B[i][k]=A[n-v][i];
 }
 k++;
 v++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<B[i][j]<<" ";
        }
    cout<<endl;
    }

}
