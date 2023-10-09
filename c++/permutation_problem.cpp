//given an array nums if distint integers return all the possible permutatiions.
// you can return the answer in any order.
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void permute(vector<int> &nums, int idx){
    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=idx;i<nums.size();i++){
        swap(nums[i],nums[idx]);
        permute(nums,idx+1);
        swap(nums[i],nums[idx]);
    }
    return;
}
int main(){
     
    int n;cin>>n;
     vector<int> nums(n);
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
}