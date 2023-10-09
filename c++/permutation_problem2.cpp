//given nums collection of numbers,nums,thet might contain duplicates,return all possible unique permtaion in any order.
#include<bits/stdc++.h>
using namespace std;

void helper(vector<int> nums,vector<vector<int>> &ans,int idx){
    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=idx;i<nums.size();i++){
        if(i!=idx && nums[i] == nums[idx])
            continue;
        swap(nums[i],nums[idx]);
        helper(nums,ans,idx+1);
    }
}
vector<vector<int>> permute(vector<int> &nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    helper(nums,ans,0);
    return ans;
}
int main(){
    int n;cin>>n;
    vector<int> nums(n);
    for(auto &i : nums)
        cin>>i;
    vector<vector<int>> res=permute(nums);
    for(auto v : res){
        for(auto i : v )
            cout<<i<<" ";
        cout<<endl;
    }
}