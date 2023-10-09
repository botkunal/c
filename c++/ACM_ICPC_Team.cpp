#include <bits/stdc++.h>
using namespace std;

int count(string a, string b){
    int cont=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='1'||b[i]=='1')
        cont++;
    }
    return cont;
}
vector<int> aceTeam(vector<string> topic){
    int n=topic.size();
    int max=0,ans=0;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        {
            int cont=count(topic[i],topic[j]);
            if(max<cont){
                max=cont;
                ans=1;
            }
            else if(max==cont){
                ans++;
            }
        }
        vector<int>v;
        v.push_back(max);
        v.push_back(ans);
        return v;
}