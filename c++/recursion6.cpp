//print numbers till n 1.decreasing  2.increasing order
#include<bits/stdc++.h>
using namespace std;

void dec(int n){
    if (n==0)
    {
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
void inc(int n){
    if (n==1)
    {
        
        return;
    }
    
    inc(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    dec(n);
    inc(n);

    return 0;
}