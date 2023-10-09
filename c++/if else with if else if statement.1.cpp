#include<iostream>
using namespace std;

int main() {
    

    int savings;
    cin>>savings;
    
    if(savings>5000) {
        if(savings>10000) {
            cout<<"road trip with neha ";
        }else{
            cout<<"shoping with nwha";
        }
    } else if(savings>2000) {
        cout<<"rashmi";
    } else {
        cout<<"freinds";
    }
    
    return 0;
}