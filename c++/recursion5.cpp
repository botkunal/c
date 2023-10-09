//chaek if an array is sorted or not
#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n){

    if (n==1)
    {
        return true;
    }
    
    bool restArray=sorted(arr+1,n-1);
    return (arr[0]<arr[1]&&restArray);
    
    
}
int main(){
    /*    string s={1,2,3,4,5,6,7,10,9};
        string r=s;
        sort(r.begin(),r.end());
        if (r==s)
        {
            cout<<"sorted"<<endl;
        }
        else
        {
            cout<<"not sorted"<<endl;
        }*/
    int arr[]={1,9,3,4,5};
    
    cout<<sorted(arr,5)<<endl;
    

}