#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;
        cin >> n;
        vector<long > arr;
        for (int i = 0; i < 2 * n; i++)
        {
           long  a;
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        long  x = INT_MAX;
        long  j=n-1;
        for (int i = 0; j<2*n; i++)
        {
            x=min(x,arr[n+i-1]-arr[i]);
            j++;
        }
        cout<<x<<endl;
	}
	return 0;
}
