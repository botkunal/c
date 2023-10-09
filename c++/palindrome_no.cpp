#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string p=s;
    reverse(p.begin(),p.end());
    if(p==s)    
    {
        cout<<"wins";
    }
    else
    {
        cout<<"loses";
    }
    
return 0;

}