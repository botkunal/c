#include<bits/stdc++.h>
using namespace std;

class a
{
public:
    class b
    {
        public:
        int a,b;
        void input() //
        {
            cout<<"enter two no."<<endl;
            cin>>a>>b;
        }
        void show()
        {
            cout<<a<<" "<<b<<endl;
        }
    };
    
};

int main()
{
    a::b obj;
    obj.input();
    obj.show();
}

