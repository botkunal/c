#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    string s;cin>>s;
	    int count=0;
	    for(int i=0;i<n;i++){
	        char r=s[i];
	        if(r=='a'||r=='e'||r=='i'||r=='o'||r=='u'){
	            count=0;
	           // continue;
	        }
	        else{
	            count++;
	            if(count==4){
	                break;
	            }
	        }
	    }
	    if(count==4){
	        cout<<"no"<<endl;
	    }
	    else
	    cout<<"yes"<<endl;
	}
	return 0;
}
