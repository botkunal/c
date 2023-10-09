#include<iostream>
using namespace std;
class Solution
{
    public:
    void printFloydTringle(int N){
        int M=1;
    for (int  i = 1; i <= N; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<M<<" ";
            M++;
        }
        cout<<endl;
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
        ob.printFloydTringle(N);
    }
    return 0;
    
}