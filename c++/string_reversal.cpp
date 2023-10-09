#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="geeks for geeks";
    int n = s.length();
    string ans="";
    int count=-1;
    for (int i = 0; i < n; i++)
    {
        count=ans.find(s[n-i-1]);
        if (count==-1&&s[n-i-1]!=' ')
        {
            ans+=s[n-i-1];
        }
    }
    cout<<ans;
    
}