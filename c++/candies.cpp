#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
      map<int,int>mp;
      int n;
      cin>>n;
      int arr[2*n];
      for(int i=0;i<2*n;i++){
          cin>>arr[i];
      }
      for(auto a:arr){
        mp[a]++;
      }
       for(auto it=mp.begin();it!=mp.end();++it){
        if(it->second>=3){
            cout<<"No"<<endl;
        break;
       }
       else{
        cout<<"yes"<<endl;
        break;
       }
       }
  
	// your code goes here
	return 0;
}
}
