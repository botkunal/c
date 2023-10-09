#include<iostream>
using namespace std;
class Solution
{
    public:
    void pattern(int N){
        
    for (int  i = 1; i <= N; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<" ";
    }
        
    }
};
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int N;cin>>N;
        Solution ob;
        ob.pattern(N);
    }
    return 0;
    
}