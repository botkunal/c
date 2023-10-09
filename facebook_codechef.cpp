#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int y;cin>>y;
	while(y--){
	    int n;cin>>n;
	    int a[n];
	    int b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    int c[n];
	    for(int i=0;i<n;i++){
	        c[i]=a[i]+b[i];
	    }
	    int max=0;
	    for(int i=0;i<n;i++){
	        if(a[max]<a[i]){
	            max=i;
	        }
	        else if(a[max]==a[i]){
	            if(c[i]>c[max]){
	                max=i;
	            }
	        }
	    }
	    cout<<max+1<<endl;
	}
	return 0;
}
