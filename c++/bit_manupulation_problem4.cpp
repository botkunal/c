//write a program to find a unique number i n an arrray where all numbers except one are present twice.
#include<bits/stdc++.h>
using namespace std;

int unique(int arr[],int n){
    int xorsum=0;
    for (int i = 0; i < n; i++)
    {
        xorsum=xorsum^arr[i];
    }
    return xorsum;    
}
int main(){

    int arr[]={1,2,3,4,3,2,1};
    cout<<unique(arr,7);
    return 0;
}