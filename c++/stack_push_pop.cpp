#include<bits/stdc++.h>
using namespace std; 

int s[10],top= -1;
void push(int val){
    if(top>10){
        cout<<"stack_full"<<endl;
    }
    else{
    top++;
    s[top]=val;
    }
}
void disp(){
    for (int i = 0; i <=top+1; i++)
    {
        cout<<s[i]<<" ";
    }
}
void pop(){
    if(top<=-1){
        cout<<"stack_empty"<<endl;
    }
    else{
        top--;
    }
}
int main(){
    int val;
    for (int i = 0; i < 10; i++)
    {
        cin>>val;
        push(val);
    }
    
    pop();
    disp();


    
}