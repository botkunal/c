#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int flag=0;
        for (int i = 0; i < n-1; i++)
        {
            if(arr[i]==k){
                flag=1;
                break;
            }
        }
        if(n==1 && arr[0]==k){
            cout<<"yes"<<endl;
        }
        else if(flag==1){
            cout<<"yes"<<endl;
        }
        else
        cout<<"no"<<endl;
        
    }
    return 0;
}