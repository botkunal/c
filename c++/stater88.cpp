#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	//     set<int,greater<int>> s1;
	//     for(int i=0;i<n;i++){
	//         s1.insert(a[i]);
	//     }
	//    // for(auto i:s1){
	//    //     cout<<i<<' ';
	//    // }
	//     int j=0,l=1;
	//     auto it1=next(s1.begin(),j);
	//     auto it2=next(s1.begin(),l);
	    
	    
	//     cout<<*it1+*it2<<endl;
    set<int,greater<int>> s1;
    for(int i=0;i<n;i++){
        s1.insert(a[i]);
    }
    auto it1=next(s1.begin(),0);
	auto it2=next(s1.begin(),1);
	    
    cout<<*it1+*it2<<endl;
	}
	return 0;
}
