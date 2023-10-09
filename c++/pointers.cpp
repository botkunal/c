#include<bits/stdc++.h>
using namespace std;

int main()
{
          /*  int a=10;
            int* aptr=&a;

            cout<<*aptr<<endl;
            *aptr=29;
            cout<<*aptr;*/

    int arr[]={10,20,30};
    cout<<*arr<<endl;

    int *ptr=arr;
    for (int i = 0; i < 3; i++)
    {
        cout<<*(arr+i)<<endl;  //here arr is index
       // arr++;  // illegal
    }
    return 0;
}