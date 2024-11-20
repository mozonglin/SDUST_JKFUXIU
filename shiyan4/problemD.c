#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i]='Z'-(str[i]-'A');    /* code */
        }else if (str[i]>='a' && str[i]<='z')
        {
            str[i]='z'-(str[i]-'a');
        }
        printf("%c", str[i]);
        
    }
    
}