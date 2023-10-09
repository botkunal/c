#include<bits/stdc++.h>
using namespace std;
int Sum(int n){
    if(n<=2){
        return n;
    }
    int arr[n+1];
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    for(int i=3;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}
int main(){
    int n;
    cin>>n;
    cout<<Sum(n)<<endl;
}