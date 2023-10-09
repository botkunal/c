#include<iostream>
using namespace std;

int fibo(int n){
    if(n==0|n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
void fib(int n){
    int x=0;
    int y=1;
    int nextterm;
    for(int i=1;i<=n;i++){
        cout<<x<<"  ";
        nextterm=x+y;
        x=y;
        y=nextterm;
    }
}
int main(){
    int n;cin>>n;
    cout<<fibo(n)<<endl;
    fib(n);
}