#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s="i.am.a.good.boy";
   string d="";
   vector<string> s2;
   for(int i=0;i<s.size();i++){
    if(i==s.size()-1){
        d+=s[i];
        s2.push_back(d);
    }
    if(s[i]=='.'){
        s2.push_back(d);
        d="";
    }
    else{
        d+=s[i];
    }
   }
    for(int i=0;i<s2.size();i++){
    cout<<s2[i]<<endl;
   }
    d="";
    
   for(int i=s2.size()-1;i>=0;i--){
        
        if(i==0){
            d+=s2[i];
        }
        else{

        d+=s2[i]+".";
        }
   }
   cout<<d;

}