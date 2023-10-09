#include<bits/stdc++.h>
using namespace std; 

void towerOfHanoi(int n,char s ,char a ,char d){
    if(n==0){
        return;
    }
        towerOfHanoi(n-1,s,d,a);//move 1st to 2rd
        cout<<n<<" from "<<s<<"->"<<d<<endl;
        towerOfHanoi(n-1,a,s,d);//move 2nd to 3rd
    
}
int main(){
    int n;
    cin>>n;
    towerOfHanoi(n,'s','a','d');
    return 0;
}