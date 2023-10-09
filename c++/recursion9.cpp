#include<bits/stdc++.h>
using namespace std;

void permutation(string s, string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }

    for(int i=0;i<s.length();i++){
        char ch = s[i];
        string ros = s.substr(0,i)+s.substr(i+1);
    
        permutation(ros,ans+ch);
    }
}

int main(){
    permutation("ABC","");
    return 0;
}
/*vector<vector<string>> ans;
int main(){
    int n;cin>>n;
     vector<string> nums(n);
     for(auto &i: nums)
        cin>>i;
    //permute(nums,0);
    sort(nums.begin(),nums.end());
    do{
        ans.push_back(nums);
    }while(next_permutation(nums.begin(),nums.end()));
    for(auto v : ans){
        for(auto i : v)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}*/
