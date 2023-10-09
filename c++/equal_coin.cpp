#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int X=x*1,Y=y*2;
    int z=X+Y;
    if(x==0&&y%2==0)
    cout<<"YES"<<endl;
    else if(x==0&&y%2!=0)
    cout<<"NO"<<endl;
    else if(z%2==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

	return 0;
}