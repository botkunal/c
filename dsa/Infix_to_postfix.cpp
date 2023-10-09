// write a program to convert infix to postfix expressions using stack

#include<bits/stdc++.h>
using namespace std;

int prec(char c){

    if(c=='^'){
        return 6;
    }
    else if(c=='/'){
        return 5;
    }
    else if(c=='*'){
        return 4;
    }
    else if(c=='%'){
        return 3;
    }
    else if(c=='+'){
        return 2;
    }
    else if(c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

string infixtoPostfix(string s){

    stack<char> st;
    string res;

    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            res+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && prec(st.top())>prec(s[i])){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    return res;
    
}
int main(){
    string s;
    cout<<"Enter a infix expression : ";
    cin>>s;
    cout<<"Its postfix expression : ";
    cout<<infixtoPostfix(s)<<endl;
}
//(a-b/c)*(a/k-l)