#include<iostream>
using namespace std;

int main() {

    char button;
    cout<<"Input  a character";
    cin>>button;

    switch (button)
    {
    case 'a':
    cout<<"hello"<<endl;
    break;
    case 'b':
    cout<<"fuck"<<endl;
    break;
    case 'c':
    cout<<"slute"<<endl;
    break;
    case 'd':
    cout<<"hola"<<endl;
    break;
    case 'e':
    cout<<"ciaop"<<endl;
    break;
    
    default:
        cout<<"i am still learning more"<<endl;
        break;
    }
    return 0;
}