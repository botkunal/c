//program to cheak if a triangle is equilateral,isosceles or scalene//
#include<iostream>
using namespace std;

int main() {

    int sidea, sideb, sidec;
    cout<<"Enter the value of sides";
    cin>>sidea>>sideb>>sidec;

    if(sidea==sideb && sideb==sidec) {
        cout<<"Equilateral triangle";
    }
    else if (sidea==sideb || sideb==sidec || sidec==sidea){
        cout<<"Isosceles triangle";
    }
    else {
        cout<<"Scalene traingle";
    }











}