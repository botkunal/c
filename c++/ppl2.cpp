#include<iostream>
using namespace std; 
int count=0;
class demo{
    public:
    demo(){
        count++;
        cout<<"\n No of obj created"<<count;
    }
    ~demo(){
        count--;
        cout<<"\n No of obj destructed"<<count;
    }
};
int main(){
    demo aa, bb , cc;
    {demo dd;}
    return 0;
}