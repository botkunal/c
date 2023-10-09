#include<bits/stdc++.h>
using namespace std;

int* insert(int arr[],int n,int k,int item){

    //int arr[]={1,5,8,9,4,6,7};
    int j,k;

    for(j=n;j>=k;j--){
        arr[j+1]=arr[j];
    }
    arr[k] = item;
    n++;
    return arr;
}
int main(){
    int arr[]={1,5,8,9,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int item=2;
    insert(arr,n,k,item);
    for (int i = 0; i <=n; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}