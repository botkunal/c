#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"prime no. between a and b\n";
    // for num = a to b do//
    // for i=2 to num-1 do Cheal of i divides num //ls
    for(int i=a;i<=b;i++){
        int j;
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<endl;
        }
    }
    return 0;
}