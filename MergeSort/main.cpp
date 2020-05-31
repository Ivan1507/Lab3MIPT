#include <iostream>

using namespace std;
void merge_sort(double *A,int array_size){
    if(array_size<=1)
        return;
    int middle=array_size/2;
    double *left=A;
    double *right=A+middle;
    int left_size=middle;
    int right_size=array_size-middle;
    merge_sort(left,left_size);
    merge_sort(right,right_size);
    double *buffer=new double[array_size];
    int left_i=0;
    int right_i=0;
    int buffer_i=0;
    while(left_i<left_size && right_i<right_size){
        if(left[left_i]<=right[right_i]){
                buffer[buffer_i]=left[left_i];
        buffer_i+=1;
        left_i+=1;
        }else{
        buffer[buffer_i]=right[right_i];
        buffer_i+=1;
        right_i+=1;
        }
    }
    while(left_i<left_size){
        buffer[buffer_i]=left[left_i];
        left_i+=1;
        buffer_i+=1;
    }
    while(right_i<right_size){
        buffer[buffer_i]=right[right_i];
        right_i+=1;
        buffer_i+=1;
    }
    for(int i=0;i<array_size;i++){
        A[i]=buffer[i];
    }
    delete[] buffer;
}
void input_ar(double *A,int n){
    for(int i=0;i<n;i++){
    cin>>A[i];
}
}
void print_ar(double *A,int n){
for(int i=0;i<n;i++){
    cout<<A[i]<<' ';
}
}
int main()
{
    int n;
    cin>>n;
    double *A=new double[n];
    input_ar(A,n);
    merge_sort(A,n);
    print_ar(A,n);
    delete[] A;
    return 0;
}
