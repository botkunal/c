#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
   string s1="abc";
   string s2="xyz";

   if(s1.compare(s2) ==0)
    cout<<"strings are equal"<<endl;
    else
    cout<<"strings are not equal"<<endl;
   cout<<s2.compare(s1)<<endl;

   return 0;
}