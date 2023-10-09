#include<bits/stdc++.h>
using namespace std;

int deletek(int arr[], int n,int k){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==k){
            break;
        }
    }
    if(i<n){
        n--;
        for(int j=i;j<n;j++){
            arr[j] = arr[j+1];
        }
    }
    return n;
}
int main(){
    int arr[]={1,5,8,9,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=9;
    deletek(arr,n,k);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}