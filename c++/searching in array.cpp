#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int  i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            cin>>arr[i][j];

        }
        
    }
    cout<<"matrix\n";
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            /* code */cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    int x;
    cin>>x;

    bool flag = false;
    for (int i = 0; i <n; i++)
    {
        /* code */for (int j = 0; j < m; j++)
        {
            if (arr[i][j]==x)
            {
                cout<<i<<" "<<j<<" "<<"\n";
                flag = true;
            }
            
        }
        
    }
    if (flag)
    {
        cout<<"element is found\n";

    }else
    {
        cout<<"element is mot found \n";
        }
    
    
    
    

}