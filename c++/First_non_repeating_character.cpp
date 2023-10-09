#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    char nonrepeatingCharacter(string S)
    {
       int n=S.length();
       for(int i=0;i<n;i++){
           if(S.find(S[i],S.find(S[i])+1)==string::npos){
               return S[i];
               break;
           }
       }
       return '$';
    }
};

int main()
{
    string S;
	    cin >> S;
	    solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
}
