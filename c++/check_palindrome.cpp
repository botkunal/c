#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool cheak=1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
            cheak=0;
            break;
        }
        
    }
    
    if (cheak==true)
    {
        cout<<"pallindrome";
    }
    else
    {
        cout<< "pallindorme no";
    }
    
    return 0;
}