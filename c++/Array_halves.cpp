#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    long long arr[2*n];
	    for(int i=0;i<2*n;i++){
	        cin>>arr[i];
	    }
	    vector<long long > k1;
	    vector<long long > k2;
	    for(int i=0;i<2*n;i++){
	        if(arr[i]>n && i<n)
	        k1.push_back(i+1);
	        if(arr[i]<=n && i>=n)
	        k2.push_back(i+1);
	    }
	    sort(k1.begin(),k1.end());
	    sort(k2.begin(),k2.end());
	    long long ans=0;
	    n=k1.size();
	    for(int i=0;i<n;i++)
	    ans+=abs(k1[i]-k2[i]);
	    cout<<ans<<endl;
	}
	return 0;
}
