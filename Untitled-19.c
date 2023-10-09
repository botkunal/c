#include<stdio.h>

int main(){

  int numbr,k,fact,rem,sum=0,input;

  int first,last;

  printf("Enter the first value: ");

  scanf("%d",&first);

  printf("Enter the last value: ");

  scanf("%d",&last);

  printf("The Strong numbers in the given range are: ");

  for(numbr=first; numbr <= last; numbr++){

      input = numbr;

      sum=0;

      while(input>0){

          k=1;

           fact=1;

           rem=input%10;

           while(k<=rem){

             fact=fact*k;

             k++;

           }

         sum=sum+fact;

         input=input/10;

      }

      if(sum==numbr)

           printf("%d ",numbr);

  }

  return 0;

}