#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%s", s);
    // s = realloc(s, strlen(s) + 1);
    int fre[10] = {0};
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            fre[s[i] - '0']++ ;    
        }
    }
    for(int i = 0; i<10; i++)
        if(fre[i] > 0)
            printf("%d ", fre[i]);
        else
            printf("0 ");

}
 