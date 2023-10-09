//form the biggest no. form the numeric string
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="493283275";
    sort(s.begin(),s.end());
    cout<<s<<endl;
    
    sort(s.begin(),s.end(), greater<int>());
    cout<<s<<endl;
     
}