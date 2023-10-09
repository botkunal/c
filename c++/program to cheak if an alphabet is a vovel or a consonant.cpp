//program to cheak if an alphabet is a vovel or a consonant//
#include<iostream>
using namespace std;
int main() {

char c;
int islowercasevovel,isuppercasevovel;
cout<<"Enter an alphabet";
cin>>c;

islowercasevovel = (c=='a' || c=='E' || c=='i'|| c=='o' || c=='u');

isuppercasevovel = (c=='A' ||c=='E' ||c=='I'||c=='O'||c=='U');

if(islowercasevovel || isuppercasevovel){
    cout<<c<<"is  a vovel";
}
else{
    cout<<c<<"is a consonant";
}



return 0;



}