#include <bits/stdc++.h>
using namespace std;
   
   int main()
    {
        int t , mod = 1000000007; cin>>t;
        
        for(int i = 0; i < t ; i = i + 1 )
        {
            int n,c; cin>>n;
            string s; cin>>s;
            long long putout = 0;
            for(int i = 2 ; i < n ; i += 2)
            {
                c = 0;
                int p = s[i-2] - '0', q = s[i-1] - '0' , r = s[i] - '0';
                if((p|q)==r)
                {
                    c++;
                }
                if((p&q)==r)
                {
                    c++;
                }
                if((p^q)==r)
                {
                    c++;
                }
                if(putout == 0 and i==2)
                {
                    putout = c;
                }
                else
                {
                    putout = (putout*c)%mod;
                }
            }
            cout << putout << endl;
        }
        return 0;
}

