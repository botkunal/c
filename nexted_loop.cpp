#include<bits/stdc++.h>

int main()
{
    for(int i=1; i<=12;i++)
    {
        for(int j=1; j<=25; j++)
        {
            if((i>=1 && i<=2 )&&((j>=1 && j<=7) || (j>=10 && j<=16) || (j>=19 && j<=25)))
            {
                printf("u");
            }
            else if((i>=3 && i<=4)&&((j>=1 && j<=2) || (j>=5 && j<=7) || (j>=10 && j<=11) || (j>=14 && j<=16) || (j>=19 && j<=20)))
            {
                printf("u");
            }
            else if((i<=5) &&((j>=1 and  j<=2) || (j>=10 & j<=11) || (j>=19 && j<=20)))
            {
                printf("u");
            }
            else if ((i>=6 && i<=7) && ((j>=1&&j<=2) || (j>=10 && j<=16) || (j>=19 && j<=25)))
            {
                printf("u");
            }
            else if((i>=8) &&((j>=1 && j<=2) || (j>=15 && j<=16) || (j>=19 && j<=20)))
            {
                printf("u");
            }
            else if ((i>=9 && i<=10) && ((j>=1 && j<=2) || (j>=5 && j<=7) || (j>=10 && j<=12) || (j>=15 && j<=16) || (j>=19 && j<=20)))
            {
                printf("u");
            }
            else if ((i>=11 && i<=12) && ((j>=1 && j<=7) || (j>=10 && j<=16) ||(j>=19 && j<=25)))
            {
                printf("u");
            }
            
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}