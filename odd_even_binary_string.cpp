#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int y=0;
	    for(int i=0;i<n;i++){
	        int x;cin>>x;
	        if(x==0)
	        y++;
	    }
	    if(y%2==0)cout<<"yes\n";
	    else cout<<"no\n";
	}
	return 0;
}
