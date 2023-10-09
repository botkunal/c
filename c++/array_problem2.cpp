#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int count=0;
    for (int i = n; i >0; i)
    {
        if (i%10==4)
        {
            count+=1;    
        }  
        i=i/10; 
    }
    
    cout<<count<<endl;
    }
    return 0;
}