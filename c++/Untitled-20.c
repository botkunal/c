#include<stdio.h>
void swap(int a, int b) ;
int main()
{
    int a=10;
    int b=20;
    printf("value of 'a' before swap = %d",a);
    printf("value of 'b' before swap = %d",b);
    
    swap (a, b);
    printf("value of 'a' after sawp = %d",a);
    printf("value of 'b' after swap = %d",b);
    
    return 0;
}
void swap(int a, int b)
    {
    int temp;
    temp=a;
    a=b;
    b=temp;
       printf("after swaping value in function a= %d,b=%d",a,b);
    }