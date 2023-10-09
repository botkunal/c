#include <bits/stdc++.h>
using namespace std;
int main()
{
     
        int n;
        cin >> n;
        string s;
        cin >> s;
        string r = s;
        sort(r.begin(), r.end());
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] > s[n - 1 - i])
            {
                int temp = s[i];
                s[i] = s[n - 1 - i];
                s[n - 1 - i] = temp;
            }
        }
        if(s==r){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    
    return 0;
}