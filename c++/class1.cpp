#include<bits/stdc++.h>
using namespace std;

class add
{
    private:
    int a,b,c; //variable declaration
    public:
    void getdata()
    {
        cout<<"Enter two element"<<endl;
        cin>>a>>b;
    }
    void add_data()
    {
        c=a+b;
        cout<<"Sum is ="<<c<<endl;
    }
};
int main(){
    add a;
    a.getdata();
    a.add_data();
}