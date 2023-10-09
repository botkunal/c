#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int> a(n);
	    vector<int> d(n);
	    int ans=1;
	    unordered_map<int,int> mp;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        mp[a[i]]++;
	    }
	    for(int i=0;i<n;i++){
	        cin>>d[i];
	        mp[d[i]]++;
	    }
	    // for(auto itr:mp){
	    //     ans=max(ans,itr.second);
	    // }
	    // cout<<ans<<endl;
		//unordered_map<int,int>::iterator itr;
	    for(auto itr:mp){
	        cout<<itr.first<<"  "<<itr.second<<endl;
	    }
	}
	return 0;
}
