#include<bits/stdc++.h>
using namespace std;
string firstrepchar(string s);
int main(){

    int t ;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        cout<<firstrepchar(s)<<endl;
    }
    return 0;
}
string firstrepchar(string s)
{
    int n=s.size();
    int count[n+1]={0};
    string empty="";
    for(int i=0;i<n;i++)
    {
        if(count[s[i]]==1){
            empty=s[i];
            cout<<empty;
        }
        else
            count[s[i]]++;
    }
    return "-1";
}