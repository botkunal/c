#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
        if (a>=c&&a<=d)
        {
            if (b>=d)
            {
                cout<<(d-c+1+b-d)<<endl;
            }
            else
            {
                cout<<(d-c+1)<<endl;
            }           
        }
        else if(c>=a&&c<=b){
            if (b<=d)
            {
                cout<<(d-c+1+b-d)<<endl;
            }
            else
            {
                cout<<(b-a+1)<<endl;
            } 
        }
        else
        {
            cout<<(b-a+1+d-c+1)<<endl;
        }
        
        
        // int ar[b-a+1];
        // for(int i=a;i<=b;i++){
        //     cin>>ar[i];
        // }
        // int as[d-c+1];
        // for(int i=c;i<=d;i++){
        //     cin>>ar[i];
        // }
	}
	return 0;
}
// 4
// 1 3 5 5
// 3 8 2 5
// 1 8 4 6
// 5 5 5 5
// 4
// 7
// 8
// 1