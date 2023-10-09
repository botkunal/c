#include<bits/stdc++.h>
using namespace std;

class solution
{
    public:
    long long sumofbitdifference(int arr[],int n){
    int ans = 0; // Initialize result
    // traverse over all bits
    for (int i = 0; i < 32; i++) {
        // count number of elements with i'th bit set
        int count = 0;
        for (int j = 0; j < n; j++)
            if ((arr[j] & (1 << i)))
                count++;
        // Add "count * (n - count) * 2" to the answer
        ans += (count * (n - count) * 2);
    }
    return ans;
        
    }
};
int main(){
    int i,n;
    cin>>n;
    int arr[n];
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    solution ob;
    auto ans=ob.sumofbitdifference(arr,i);
    cout<<ans<<endl;
}