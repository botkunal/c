#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return (a/gcd(a,b))*b;
}
int main() {
	int t;cin>>t;
	while(t--){
	    int a,b,x;cin>>a>>b>>x;
	    cout<<(lcm(a,x)-gcd(b,x));
	}
	return 0;
}
