#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() {
	
	int t;cin>>t;
	while(t--){
	    int n,k;cin>>n>>k;
	    string s;cin>>s;
	    int m=s.length();
	   
	   char ch='0';
	    for(int i=0;i<k;i++){
	        if(s[0]=='0'){
	            s.insert(0,"1");
	        }else{
	            
	            s.insert(s.length(),"0");
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}
/*
4
4 2
1101
6 3
001110
5 4
00110
3 1
000*/
