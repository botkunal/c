#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
   string s1="nonvegwomen";

   s1.insert(3,"lol");
   cout<<s1<<endl;

   cout<<s1.size()<<endl;

   for (int  i = 0; i < s1.length(); i++)
   {
    cout<<s1[i]<<endl;
   }
   
   

   return 0;
}