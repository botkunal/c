#include<stdio.h>
#include<string.h>
// void main()
// {
//     char arr[]="nagpur";
//     int len1,len2;
//     len1=xstrlen(arr);
//     len2=xstrlen("humpty dumpty");
//     printf("\nString=%s length=%d",arr,len1);
//     printf("\nString=%s length=%d","humpty dumpty",len2);
// }

xstrlen(char *s)
{
    int length=0;
    while(*s!='\0')
    {
        length++;
        s++;   
    }
    return(length);
}