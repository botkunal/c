#include<bits/stdc++.h>
using namespace std;

class student{
    string name;
    public:
    int age ;
    bool gender;

    student(){                       // Default   constructor
        cout<<"Default constructor"<<endl;
    }

    student(string s,int a, int g){ // parameterised  constructor
        cout<<"parameterised constructor"<<endl;
        name = s;
        age =a;
        gender =g;
    }

    student(student &a){                //copy constructor
        cout<<"copy constructor"<<endl;
        name =a.name;
        age = a.age;
        gender =a.gender;
    }

    ~student(){                           // distructor 
        cout<<"Destructor called"<<endl;
    }

    void setName(string s){
        name =s;
    }
    
    void getName(){
        cout<<name<<endl;
    }
    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age= ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }

    bool operator == (student &a){
        if (name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
        
    }
};

int main(){
    /*student a;
    a.name ='urvi';
    a.age=20;
    a.gender=1;

    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        string s;
        cout<<"Name = ";
        cin>>s;
        arr[i].setName(s);
        cout<<"Age= ";
        cin>>arr[i].age;
        cout<<"Gender = ";
        cin>>arr[i].gender;
    }    
    
    for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }*/

    student a("Urvi", 20,1);
    a.printInfo();
    student b("rahul",42,0);
    student c = a;

    if(b==a){
        cout<<"Same"<<endl;
    }
    else
    cout<<"not Same"<<endl;
    

}