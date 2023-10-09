#include<stdio.h>
#include<string.h>
void main()
{
    char arr[]="nagpur";
    int len1,len2;
    len1=strlen(arr);
    len2=strlen("humpty dumpty");
    printf("\nString=%s length=%d",arr,len1);
    printf("\nString=%s length=%d","humpty dumpty",len2);

}