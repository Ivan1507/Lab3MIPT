 #include <iostream>
using namespace std;
void print(int A[],int n){
for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
}
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int index=0;
    int min=0;
    for(int i=0;i<n;i++){
        if(A[i]<0){
            for(int j=0;j<n;j++){
                if(A[i]>A[j]){
                    int t=A[i];
                    A[i]=A[j];
                    A[j]=t;
                    print(A,n);
                    cout<<'\n';
                }
                }

            }
        else if(A[i]>0){
            for(int j=0;j<n;j++){
                if(A[j]>A[i]){
                    int t=A[i];
                    A[i]=A[j];
                    A[j]=t;
                    print(A,n);
                    cout<<'\n';
                }
            }
        }
    }



}
