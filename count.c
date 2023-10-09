#include<stdio.h>

int main()
{
    int i,pcount=0,ncount=0;
    int zcount=0,a[20];
    
    for(i=0;i<=19;i++)
    {
    printf("\nEnter the element:");
    scanf("%d",&a[i]);
    }
    for(i=0;i<=19;i++)
    {
        if(a[i]<0)
                ncount++;
        if(a[i]>0)
                pcount++;
        if(a[i]=0)
                zcount++;
    }
    printf("%d %d %d", ncount, pcount, zcount);
    
}