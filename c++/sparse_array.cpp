#include<bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> ans; // for storing the ans as a vector
    int n = strings.size();
    int m = queries.size();
    for(int i=0; i<m; i++) //Loop 1st as described above
    {   int count =0;
        for(int j=0; j<n; j++) //Loop 2nd as described above
        {
            if(strings[j]==queries[i])
            {
                count++; // if the same increment value of coint increase by 1
            }
        }
        ans.push_back(count);
    }
    return ans;
}