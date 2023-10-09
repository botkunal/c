/*product of all subarray 
approach over all the subaraays.
nested loop*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }   
    int curr=1;
    for (int  i = 0; i < n; i++)
    {
        curr = 1;
        for (int j=i;j<n;j++)
        {
            curr *= a[j];
            cout<<curr<<endl;
        }
        
    }  
}