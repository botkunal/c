#include<iostream>
#include<math.h>
using
namespace std;

void fib(int n){
    int x=0;
    int y=1;
    int nextterm;
    for(int i=1;i<=n;i++){
        cout<<x<<endl;
        nextterm=x+y;
        x=y;
        y=nextterm;
    }
}

int main(){

    int n;
     cin>>n;

     fib(n);

     return 0;

}