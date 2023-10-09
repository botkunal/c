#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int  a[n];
	    int  b[n-1];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
        }
	    int minno=INT_MAX;
	    for(int i=0;i<n-1;i++){
	        b[i]=abs(a[i]+a[i+1]);
	    }
	    for(int i=0;i<n-1;i++){
	        minno=min(minno,b[i]);
	    }
	    cout<<minno<<endl;	    
	}
	return 0;
}
