#include<iostream>
using namespace std;
class complex
{
private:
int a;
int b;
public:
complex(){
    cout<<"default";
}
~ complex(){
    cout<<"destructor calling";
}
complex (int x){
    a=x;
    cout<<"calling parametrised"<<a<<endl;

}

complex(int x,int y)
{
    a=x;
    b=y;
    cout<<"calling parametrised "<<a<<" "<<b<<endl;
}


complex(complex &x,complex &y)
{
    // a=x.a;b=y.b;
    cout<<"copy consturctor 2"<<a<<b<<endl;
}
void show(){
    cout<<"value of copyied value of a and b"<<a<<"      "<<b<<endl;
}
};

int main(){
    complex c1(5);
    complex c2(7,8);
    complex c3;
    c3.show();
    
}