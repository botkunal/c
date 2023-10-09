#include<iostream>
using namespace std;

class sample
{
private:
    static int count;
public:
    void show();
    static void show_count();
};
int sample::count ;
void sample::show()
{
    cout<<"hello"<<endl;
    count++;
}
void sample::show_count()
{
    cout<<"count is " <<count;
}
int main(){
    sample a,b,c;
    a.show();
    b.show();
    c.show();
    //a.show_count();
    sample::show_count();
}




