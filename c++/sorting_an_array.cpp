#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        sort(a,a+n);
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
    }
    
};
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];  
    }
    Solution ob;
    ob.sort012(a,n);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}